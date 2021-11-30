CC = g++
CFLAGS = -c -Wall --std=c++17
LFLAGS = -Wall
OBJS = main.o oscillator.o

all : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o main

main.o : main.cpp
	$(CC) $(CFLAGS) main.cpp 

oscillator.o : oscillator.h oscillator.cpp 
	$(CC) $(CFLAGS) oscillator.cpp 

run :
	./main 

clean :
	rm -r *.o main 
