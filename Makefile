SRCS = slint/builtin_structs_internal.d \
       slint/color.d \
       slint/color_internal.d \
       slint/events_internal.d \
       slint/image.d \
       slint/internal.d \
       slint/item_tree.d \
       slint/properties.d \
       slint/brush_internal.d \
       slint/slint.d \
       slint/string.d \
       slint/timer.d \
       slint/vtable.d \
       slint/window.d

all: app app2

app: $(SRCS) main.d appwindow.d appwindow.h
	ldc2 --link-defaultlib-debug -L-lslint_cpp -L-L${HOME}/tmp/slint/lib -of $@ --gc $(SRCS) main.d appwindow.d
#	ldc2 -o $@ main.d -I$(HOME)/tmp/Slint-cpp-1.14.1-Linux-x86_64/include/slint -lslint_cpp -L$(HOME)/tmp/Slint-cpp-1.14.1-Linux-x86_64/lib

app2: $(SRCS) simple.d appwindow.h
	ldc2 --link-defaultlib-debug -L-lslint_cpp -L-L${HOME}/tmp/slint/lib -of $@ --gc $(SRCS) simple.d

appwindow.h: appwindow.slint
	~/tmp/Slint-cpp-1.14.1-Linux-x86_64/bin/slint-compiler -f cpp -o $@ $<
