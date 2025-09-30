//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include<stdio.h>
int fact(int n){
    int prod=1;
    for(int i=n; i>=1; i--)
    {
        prod=prod*i;
    }
    return prod;
}
int main()
{   
    int n, sum, temp, d, m;
    sum = 0;
    printf("enter the number");
    scanf("%d", &n);
    temp = n;

    while (n > 0)
    {
        d = n % 10;
        sum = sum + fact(d);
        n = n / 10;
    }
    if (sum == temp)
    {
        printf("its an strong no");
    }
    if (sum != temp)
    {
        printf("no its not a strong number");
    }
    return 0;
}