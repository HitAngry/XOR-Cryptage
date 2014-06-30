all: compile

compile: main.c
	gcc main.c
clean: 
	rm -rf *~