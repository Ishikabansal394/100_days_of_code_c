// Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/
#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("enter two numbers");
    scanf("%d %d", &num1, &num2);
    printf("before swapping num1=%d and num2=%d \n", num1, num2);
    num3 = num1;
    num1 = num2;
    num2 = num3;
    printf("after swapping num1=%d and num2=%d", num1, num2);
}
