ifneq ($(OS),__linux__)
$(error uhid only works on Linux! ($$OS is [${OS}]))
endif

ifneq ($(DEBUG),1)
CFLAGS += -Wall -Wextra -Werror -O3
CXXFLAGS += -Wall -Wextra -Werror -O3
else
CFLAGS += -Wall -Wextra -Werror -O0 -g -fsanitize=address -fno-omit-frame-pointer
CXXFLAGS += -Wall -Wextra -Werror -O0 -g -fsanitize=address -fno-omit-frame-pointer
LDFLAGS += -fsanitize=address
endif

CPPFLAGS = -I../..

LDFLAGS = -L../../gimxuhid -L../../gimxinput -L../../gimxhid -L../../gimxpoll -L../../gimxlog -L../../gimxtime -L../../gimxtimer
LDLIBS = -lgimxuhid -lgimxinput -lgimxhid -lgimxpoll -lgimxlog -lgimxtime -lgimxtimer

BINS=guhid_test
OUT=$(BINS)

all: $(BINS)

clean:
	$(RM) $(OUT) *~
