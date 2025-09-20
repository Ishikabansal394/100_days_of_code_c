// Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/
#include <stdio.h>
int main()
{
    int n, prod = 1;
    printf("enter n :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            prod = prod * i;
        }
        else
            continue;
    }
    printf("product of even numbers from 1 to %d is %d", n, prod);
    return 0;
}