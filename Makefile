pierwsze: main.o prime.o
	gcc -o pierwsze main.o prime.o

main.o: main.c
	gcc -o main.o -c main.c

prime.o: prime.c
	gcc -o prime.o -c prime.c

