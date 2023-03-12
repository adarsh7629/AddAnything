main.o: main.cpp
	g++ -c main.cpp -g

Add.o: Add.cpp
	g++ -c Add.cpp


all: main.o Add.o
	g++ -o Add main.o Add.o

clean:
	rm *.o
	rm *.exe