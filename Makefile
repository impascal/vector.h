build: main.o vector.o
	gcc -o main -g main.o vector.o

main.o: main.c
	gcc -o main.o -c main.c

vector.o: vector.c vector.h
	gcc -o vector.o -c vector.c

clean:
	rm -f ./*.o
	rm -f ./*.o
