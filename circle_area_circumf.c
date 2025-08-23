// Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include <stdio.h>
int main()
{
    float r;
    r = 7;
    printf("output for input1 is area=%f and circumference=%f \n", 3.14 * r * r, 2 * 3.14 * r);
    r = 3;
    printf("output for input2 is area=%f and perimeter=%f \n", 3.14 * r * r, 2 * 3.14 * r);
    return 0;
}