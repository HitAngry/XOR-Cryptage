all: compile

compile: main.c
	gcc main.c -o xor
clean: 
	rm -rf *~