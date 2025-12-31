import std.stdio;

import appwindow;

int main(string[] args) {
    auto main_window = MainWindow.create();
    main_window.run();

    return 0;
}
