/* Write a program to find the factorial of a given number using while loop. */

#include <stdio.h>

int main ()
{
  long int num, num1, fact = 1;
  printf ("Enter the number:");
  scanf ("%ld", &num);
  
  num1 = num;
  
  while (num > 0)
    {
      fact *= num;
      num -= 1;
    }

  printf ("The factorial of %ld is: %ld", num1, fact);
  return 0;
}
