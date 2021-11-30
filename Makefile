CC = g++
CFLAGS = -c -Wall --std=c++17
LFLAGS = -Wall
OBJS = main.o sine_oscillator.o

all : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o main

main.o : main.cpp
	$(CC) $(CFLAGS) main.cpp 

sine_oscillator.o : sine_oscillator.h sine_oscillator.cpp 
	$(CC) $(CFLAGS) sine_oscillator.cpp 

run :
	./main 

clean :
	rm -r *.o main 
