#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void print_arr(char * arr, int size)
{
  int i = 0;
  while (i < size)
  {
    printf("%d: %d\n", 2 * i + 3, (int) arr[i]);
    i++;
  }
}
void print_primes(char * arr, int size)
{
  int i = 0;
  while (i < size)
  {
    if(!arr[i])
    printf("%d \n", 2 * i + 3);
    i++;
  }
}

void cross_off(char * ptr, int size, int multi_loc)
{
  int i;
  for (i = 3 * multi_loc + 3; i < size; i += 2 * multi_loc + 3)
      ptr[i] = 1;
}

void cross_all(char * ptr, int size)
{
  int i;
  for (i = 0; i < (int)(sqrt((double)size)); i++){
    cross_off(ptr, size, i);
  }
}

int prime_num(char * arr, int size, int num)
{
  if (num == 0)
  return 2;
  int i = 0;
  int ctr = 1;
  while (i < size)
  {
    if(!arr[i])
    {
      ctr ++;
      if (ctr == num)
        return 2 * i + 3;
    }
    i++;
  }
}

int sieve(int targetPrime)
{
  if (targetPrime == 1)
    return 2;
  int size;
  if (targetPrime <= 5000)
  {
    size = (int) (1.30 * targetPrime * log((double) targetPrime) + 10);
  }
  else
  {
    size = (int) (1.15 * targetPrime * log((double) targetPrime));
  }
  char * nums = calloc(sizeof(int), size);
  cross_all(nums, size);
  //print_primes(nums, size);
  return prime_num(nums, size, targetPrime);
}
