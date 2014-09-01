CC=g++
LIBS=-lGL -lGLU -lglut -lstdc++
BINDIR=../bin
OBJS=main.o
CFLAGS=-c -Wall
LFLAGS=-Wall

all: main

main: $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o $(BINDIR)/$@ $(LIBS) 

.cpp: main.cpp
	$(CC) $(CFLAGS) $< -o $@ $(LIBS)

clean:
	rm $(BINDIR)/* *.o
