CFLAGS += -s -O3
CXXFLAGS += -s -O3

CPPFLAGS = -I../..

LDFLAGS = -L../../gimxuhid -L../../gimxinput -L../../gimxhid -L../../gimxpoll -L../../gimxtimer
LDLIBS = -lgimxuhid -lgimxinput -lgimxhid -lgimxpoll -lgimxtimer

BINS=guhid_test
ifneq ($(OS),Windows_NT)
OUT=$(BINS)
else
OUT=guhid_test.exe
endif

all: $(BINS)

clean:
	$(RM) $(OUT) *~
