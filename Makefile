OBJECTS += $(patsubst %.c,%.o,$(wildcard src/linux/*.c))

CPPFLAGS += -Iinclude -I. -I../
CFLAGS += -fPIC

include Makedefs
