D: main.o
	gcc -o D main.o
main.o: main.c
	gcc -c main.c
clean:
	rm hash_table.o MLSConferences.o teamInfo.o MLS.exe
