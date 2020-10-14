/* Write a C Program to Find the Smallest Number among Three
Numbers (integer values) using Nested IF-Else statement */

#include <stdio.h>

int main ()
{
  int num1, num2, num3, small;
  printf("Enter first number:"); scanf ("%d", &num1);
  printf("Enter second number:"); scanf ("%d", &num2);
  printf("Enter third number:"); scanf("%d", &num3);

  if(num1 < num2)
    {
        if(num2 < num3)
            small = num1;
        else
        {
            if(num1 < num3)
                small = num1;
            else
                small = num3;
        }
    }
    else
    {
        if(num2 < num3)
            small = num2;
        else
            small = num3;
    }
  
  printf("The smallest number is: %d", small);

  return 0;
}
