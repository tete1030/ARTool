AR9300 := ar9300_eeprom
SRCDIR := src
INC := include
BUILDDIR := build

BINAR9300 := bin/$(AR9300)
SRCAR9300 := $(shell find $(SRCDIR) -type f -name "*.c")
OBJAR9300 := $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SRCAR9300:.c=.o))

LDFLAGS=
CFLAGS=-c -O2 -I/lib/modules/`uname -r`/build/include
CC=gcc

all : $(AR9300)

$(AR9300): $(SRCAR9300) $(BINAR9300)

$(BINAR9300): $(OBJAR9300)
	$(CC) $(LDFLAGS) $(OBJAR9300) -o $@

$(BUILDDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(BUILDDIR)
	$(CC) $(CFLAGS) -I $(INC) $< -o $@

clean:
	rm -r $(BUILDDIR) $(BINAR9300)
