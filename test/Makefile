CFLAGS += -O3
CXXFLAGS += -O3

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
