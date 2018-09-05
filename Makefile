CC=gcc
CFLAGS=-O3 -Wall -Wextra
LDFLAGS=-I.

.PHONY: clean all

all: clean index test

clean:
	sudo rm -f *.out

%:
	$(CC) $(CFLAGS) $@.c -o $@.out $(LDFLAGS)
