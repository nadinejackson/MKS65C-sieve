#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void print_arr(char * arr, int size);
void print_primes(char * arr, int size);
void cross_off(char * ptr, int size, int multi_loc);
void cross_all(char * ptr, int size);
int prime_num(char * arr, int size, int num);
int sieve(int targetPrime);
