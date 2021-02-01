#include <stdio.h>

int next_prime(int);

void main()
{
  int prime = 2;
  for(int i = 0; i < 10; i++)
  {
    printf("%i\n", prime);
    prime = next_prime(prime);
  }
}


