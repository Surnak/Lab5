INCLUDES = -I src/
dirs = ./bin ./obj
main_obj = ./obj/main.o ./obj/roots.o 

all: ./bin/main

./bin/main: $(dirs) $(main_obj)
	gcc $(main_obj) -Wall -o ./bin/main -lm

$(dirs):
	mkdir obj
	mkdir bin

./obj/main.o: ./src/main.c
	gcc -c ./src/main.c -Wall -o ./obj/main.o $(INCLUDES)

./obj/roots.o: ./src/roots.c
	gcc -c ./src/roots.c -Wall -o ./obj/roots.o $(INCLUDES)

.PHONY: clean
clean:
	rm -rf bin/ obj/