//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>
int main()
{
    int a;
    printf("enter a number");
    scanf("%d", &a);
    if (a <= 1)
    {
        printf("not prime");
    }

    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {

            printf("not prime");
            return 0;
        }
    }

    printf("prime");
    return 0;
}