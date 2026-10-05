all: main.c
	gcc -g -o a.out -Wall main.c
factorial: factorial.c
	gcc -g -o factorial -Wall -O0 factorial.c
sayHello: hellofunc.h hellofunc.c hellomain.c
	gcc -g -o sayhello -Wall -O0 hellofunc.c hellomain.c
clean:
	rm a.out
	rm factorial
	rm sayhello
