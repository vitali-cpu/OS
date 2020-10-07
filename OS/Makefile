all: main

main: main.o realization.o
	g++ main.o realization.o -o main

main.o: main.cpp complex.h
	g++ -c main.cpp -o main.o

realization.o: realization.cpp
	g++ -c realization.cpp -o realization.o

clean:
	rm *.o main