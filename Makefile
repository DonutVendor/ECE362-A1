Mqg: main.o
	gcc -o Mqg main.o
main.o: main.c
	gcc -c main.c
clean:
	rm  main.o Mqg.exe
