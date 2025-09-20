//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include<stdio.h>
int main()
{
    int n,d;
    printf("Enter a number:  ");
    scanf("%d",&n);
    int sum =0;
    while(n>0)
    {
        d=n%10;
        sum=sum*10+d;
        n=n/10;
    }
    printf("The reverse of the number is %d",sum);
    return 0;
}    
    