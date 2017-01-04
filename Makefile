OBJECTS += $(patsubst %.c,%.o,$(wildcard src/linux/*.c))

CPPFLAGS += -Iinclude -I.
CFLAGS += -fPIC

include Makedefs
