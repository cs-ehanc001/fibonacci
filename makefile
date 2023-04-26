.PHONY: all
all: fibonacci-recursive fibonacci-iterative

fibonacci-recursive: main.o fibonacci-recursive.o
	gcc -o $@ main.o fibonacci-recursive.o

fibonacci-iterative: main.o fibonacci-iterative.o
	gcc -o $@ main.o fibonacci-iterative.o

fibonacci-recursive.o: fibonacci-recursive.c fibonacci.h
	gcc -c $< -o $@ -O3

fibonacci-iterative.o: fibonacci-iterative.c fibonacci.h
	gcc -c $< -o $@ -O3

main.o: main.c fibonacci.h
	gcc -c $< -o $@ -O3

.PHONY: clean
clean:
	rm -f fibonacci-iterative.o fibonacci-recursive.o fibonacci-recursive fibonacci-iterative main.o
