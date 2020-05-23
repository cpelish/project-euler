IDIR=../include
CC=gcc
CFLAGS=-I$(DIR)

ODIR=obj
LDIR=../lib

LIBS=-lm

_DEPS = problem_1.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = problem_1.o main.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	$(CC) -o $@ $< $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~