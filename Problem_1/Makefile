CC=gcc
CFLAGS=-I.
DEPS = problem_1.h
OBJ = problem_1.o main.o 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	$(CC) -Wall -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f *.o *~ core main