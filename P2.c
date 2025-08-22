// Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include <stdio.h>
int main()
{
    int num1, num2;
    printf("enter two numbers");
    scanf("%d %d", &num1, &num2);
    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%f", num1 + num2, num1 - num2, num1 * num2, (float)num1 / (float)num2);
    return 0;
}