/* Write a C Program to calculates the area (floating point number with two
decimal places) of a Circle given it’s radius (integer value). The value of Pi
is 3.14. */

#include <stdio.h>

int main() 
{
    const float pi = 3.14;
    float rad, area;
    
    printf("Enter radius of circle:");
    scanf("%f", &rad);
    
    area = pi * rad * rad;
    printf("Area of Circle is: %.2f", area);
    
    return 0;
}
