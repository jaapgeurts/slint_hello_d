import std.stdio;

import std.typecons;

import slint.item_tree;
import slint.interpreter;
import slint.slint;

ComponentInstance* win_g;

int main(string[] args) {

    ComponentInstance.ComponentCompiler compiler = new ComponentInstance.ComponentCompiler();

    // Nullable!ComponentDefinition build_from_source(string source_code, string path);
    MyNullable!(ComponentInstance.ComponentDefinition) component = compiler.build_from_path(
            "appwindow.slint");
    if (component.hasValue) {
        ComponentInstance.ComponentDefinition def = component.val;
        writeln("DEF: ", def);

        //ComponentHandle!ComponentInstance
        ComponentHandle!ComponentInstance win2 = def.create();
        auto win = cast(ComponentInstance*)&win2.as_ptr.data();
        win_g = win;

        auto prop = win.get_property("counter");
        writeln("Prop value: ", prop.to_number);

        win.set_callback("on_clicked", (Value[] args) {
            writeln("I was clicked: ", args[0].to_number.get, ",", args[1].to_number.get);
            //
            auto prop = win_g.get_property("counter");
            writeln("Prop value: ", prop.to_number);

            import slint.string;

            auto str = SharedString("Tada. it worked.");
            win_g.set_property("mytext", Value(str));
        });
        win.set_callback("on_accepted", (Value[] args) {
            writeln("String entered: ", args[0].to_string.asString);
            //
        });
        win.run();
    }
    else {
        writeln("Component is null");
    }

    return 0;
}
