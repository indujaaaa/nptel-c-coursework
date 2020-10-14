/* Write a program to find the GCD (Greatest Common Divisor) of 2 numbers using 'for' loop. The two numbers are taken as input from the test cases. */

#include <stdio.h>

int main ()
{
  int num1, num2, gcd;
  printf ("Enter two numbers:");
  scanf ("%d%d", &num1, &num2);
  
 for(int i = 1; i <= num1 || i <= num2; i++)
  {
      if( num1 % i == 0 && num2 % i == 0)
        gcd = i;
  }

  printf ("The GCD of the numbers is: %d", gcd);
  return 0;
}
