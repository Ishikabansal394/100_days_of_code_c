//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>
int main()
{
    int i, m, n;
    printf("enther two numbers");
    scanf("%d %d", &m, &n);
    i = (n < m) ? n : m;
    while (1)
    {
        if (i % n == 0 && i % m == 0)
        {
            printf("lcm is %d", i);
            break;
        }
        i++;
    }
    return 0;
}