FLAGS = -std=c++17

all: main

main.o: Usuario.o main.cpp
	g++ -c main.cpp $(FLAGS)

main: main.o
	g++ Usuario.o main.o -o main $(FLAGS)

Usuario.o: Usuario.h Usuario.cpp
	g++ -c Usuario.cpp $(FLAGS)


clean:
	rm *.o main