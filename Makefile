SRCS = main.d appwindow.d slint/item_tree.d  slint/window.d  slint/timer.d slint/events_internal.d slint/slint.d slint/internal.d slint/vtable.d slint/string.d slint/builtin_structs_internal.d slint/properties.d
app: $(SRCS)
	ldc2 --link-defaultlib-debug -L-lslint_cpp -L-L${HOME}/tmp/slint/lib -of $@ --gc $(SRCS)
#	ldc2 -o $@ main.d -I$(HOME)/tmp/Slint-cpp-1.14.1-Linux-x86_64/include/slint -lslint_cpp -L$(HOME)/tmp/Slint-cpp-1.14.1-Linux-x86_64/lib

appwindow.h: appwindow.slint
	~/tmp/Slint-cpp-1.14.1-Linux-x86_64/bin/slint-compiler -f cpp -o $@ $<
