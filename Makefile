Mqg: main.o arrays.o
	gcc -o Mqg -std=c99 main.o arrays.o
all: main.o arrays.o
	gcc -o Mqg -std=c99 main.o arrays.o
main.o: main.c
	gcc -c -std=c99 main.c
arrays.o: arrays.c arrays.h
	gcc -c -std=c99 arrays.c
clean:
	rm  main.o Mqg.exe arrays.o
