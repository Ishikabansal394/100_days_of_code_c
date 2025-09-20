// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include <stdio.h>
int main()
{
    int num1, num2;
    char operators;
    printf("enter two numbers");
    scanf("%d %d", &num1, &num2);

    printf("enter the operator you want to use");
    scanf(" %c", &operators);
    switch (operators)
    {
    case '+':
        printf("output = %d", num1 + num2);
        break;
    case '-':
        printf("output = %d", num1 - num2);
        break;
    case '*':
        printf("output = %d", num1 * num2);
        break;
    case '/':
        printf("output = %d", num1 / num2);
        break;
    case '%':
        printf("output = %d", num1 % num2);
        break;
    default:
        printf("enter valid op");
    }
    return 0;
}