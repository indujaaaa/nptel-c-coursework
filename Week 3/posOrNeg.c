/* Write a C program to check if a given Number is zero or Positive or
Negative Using if...else statement. */

#include <stdio.h>

int main() 
{
    double num;
    printf("Enter a number:");
    scanf("%lf", &num);
    
    if(num == 0)
        printf("Number is zero.");
    else if(num > 0)
        printf("Number is positive.");
    else
        printf("Number is negative.");
    
    return 0;
}
