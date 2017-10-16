CC=g++
CFLAGS= -c -Wall
DEPS= commands.h

all: shell 

shell: main.o commands.o
	$(CC) main.o commands.o -o shell
	rm *.o
	
main.o: main.cpp $(DEPS)
	$(CC) $(CFLAGS) main.cpp

commands.o: commands.cpp $(DEPS)
	$(CC) $(CFLAGS) commands.cpp
	
clean: 
	rm shell 
