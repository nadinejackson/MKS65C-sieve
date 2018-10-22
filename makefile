all: sieve.h driver.o
	gcc -o primetest driver.c -lm

clean: driver.o
	rm driver.o
run:
	./primetest $(args)
driver.o: driver.c
	gcc -c driver.c
