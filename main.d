import std.stdio;
import core.memory;

import appwindow;

int main(string[] args) {
    // TODO: enable later
    GC.disable();

    auto main_window = MainWindow.create();
    main_window.run();

    return 0;
}
