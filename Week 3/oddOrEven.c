/* Write a C program to check whether a given number (integer) is
Even or Odd. */

#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer:");
    scanf("%d", &num);
    
    if(num % 2 == 0)
        printf("Number is even.");
    else
        printf("Number is odd.");
    
    return 0;
}
