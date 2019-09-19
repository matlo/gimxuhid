ifneq ($(DEBUG),yes)
CFLAGS += -Wall -Wextra -O3
CXXFLAGS += -Wall -Wextra -O3
else
ifneq ($(OS),Windows_NT)
CFLAGS += -Wall -Wextra -O0 -g -fsanitize=address -fno-omit-frame-pointer
CXXFLAGS += -Wall -Wextra -O0 -g -fsanitize=address -fno-omit-frame-pointer
else
CFLAGS += -Wall -Wextra -O0 -g -fno-omit-frame-pointer
CXXFLAGS += -Wall -Wextra -O0 -g -fno-omit-frame-pointer
endif
endif

CPPFLAGS = -I../..

LDFLAGS = -L../../gimxuhid -L../../gimxinput -L../../gimxhid -L../../gimxpoll -L../../gimxlog -L../../gimxtime -L../../gimxtimer
LDLIBS = -lgimxuhid -lgimxinput -lgimxhid -lgimxpoll -lgimxlog -lgimxtime -lgimxtimer

BINS=guhid_test
ifneq ($(OS),Windows_NT)
OUT=$(BINS)
else
OUT=guhid_test.exe
endif

all: $(BINS)

clean:
	$(RM) $(OUT) *~
