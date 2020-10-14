/* Write a C program to calculate the Sum of First and the Last Digit of a given Number.
For example if the number is 1234 the result is 1+4 = 5. */

#include <stdio.h>

int main()
{
    int num, first, last;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    first = num;
    last = num % 10;
    
    while(first >= 10)
    {
        first = first/10;
    }
    
    printf("The sum of the first and last digit is: %d", first+last );
    
    return 0;
}
