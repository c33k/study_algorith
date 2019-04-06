CFLAGS=-std=c++11 -g
CC=g++
OUTDIR=./compiled

all: insertionsort selectionsort binarysearch merge

%: %.cpp
	$(CC) $(CFLAGS) -o $(OUTDIR)/$@ $^

clean:
	rm -rf $(OUTDIR)/*
