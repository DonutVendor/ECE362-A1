Mqg: main.o arrays.o
	gcc -o Mqg main.o arrays.o
main.o: main.c
	gcc -c main.c
arrays.o: arrays.c arrays.h
	gcc -c arrays.c
clean:
	rm  main.o Mqg.exe arrays.o
