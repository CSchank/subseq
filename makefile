CFLAGS = -Wall -g -ansi -O2 -std=c99

all: substr intseq

substr: ex_substr.o subseq.c subseq.h
	$(CC) -o $@ ex_substr.o subseq.c

intseq: ex_intseq.o subseq.c subseq.h
	$(CC) -o $@ ex_intseq.o subseq.c

c: clean

clean:
	rm -rf substr intseq *.o *~ 