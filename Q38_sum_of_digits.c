//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include<stdio.h>
int main()
{   int p,d,sum=0,temp;
    printf("enter number : ");
    scanf("%d",&p);
    temp=p;
     while (p > 0)
        {
            d = p % 10;
            sum = sum + d;
            p = p / 10;
        }

        printf("sum of digits of %d is %d",temp,sum);
    return 0;
}