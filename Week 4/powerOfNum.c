/* Write a C program to find power of a number using while loops. The base number (>0) and exponent (>=0) is taken from the test cases. */

#include <stdio.h>

int main ()
{
  long int base, expo, power;
  printf("Enter base number: "); scanf ("%ld", &base);
  printf("Enter exponent to be raised to: "); scanf("%ld", &expo);
  
  if(expo == 0){
      power = 1;
    }
  else{
    power = 1;
    while(expo != 0)
    {
      power = power * base;
      --expo;
    }
  }
  printf ("Result: %ld", power);
  return 0;
}
