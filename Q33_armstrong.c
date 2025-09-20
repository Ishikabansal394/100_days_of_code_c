//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include<stdio.h>
#include <math.h>
int main()
{
    int n, sum, temp, d, m;
    sum = 0;
    printf("enter the number");
    scanf("%d", &n);
    temp = n;
    m = (n == 0) ? 1 : 1 + (int)log10(n);

    while (n > 0)
    {
        d = n % 10;
        sum = sum + (int)pow(d, m);
        n = n / 10;
    }
    if (sum == temp)
    {
        printf("its an armstrong no");
    }
    if (sum != temp)
    {
        printf("no");
    }
    return 0;
}