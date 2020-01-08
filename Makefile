A1: main.o
	gcc -o A1 main.o
main.o: main.c
	gcc -c main.c
clean:
	rm  main.o A1.exe
