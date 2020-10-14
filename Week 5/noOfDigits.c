/* Write a C program to count total number of digits of an Integer number (N) */

#include <stdio.h>

int main()
{
    int num, count = 1;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    while(num >= 10)
    {
        num = num / 10;
        ++count;
    }
    
    printf("Number of digits: %d", count);
    
    return 0;
}
