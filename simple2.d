import std.stdio;

import std.typecons;

import slint.item_tree;
import slint.interpreter;
import slint.slint;

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
        win.set_callback("on_clicked", (Value[] args) {
            writeln("I was clicked: ", args[0].to_number.get, ",", args[1].to_number.get);
            //
        });
        win.run();
    }
    else {
        writeln("Component is null");
    }

    return 0;
}
