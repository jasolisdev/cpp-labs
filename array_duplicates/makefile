#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings

CC = clang++
CFLAGS  =-Wall -std=c++11

default: a.out

a.out: Main.o
	$(CC) -o a.out Main.o

main.o:  Main.cpp
	$(CC) -c Main.cpp 

run:
	./a.out
clean: 
	$(RM) a.out *.o *~
