//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include<stdio.h>
int main()
{
    int n,m,p,d;
    printf("enter n :");
    scanf("%d",&n);
    printf("enter m :");
    scanf("%d",&m);
    p=(n<m)? n:m;
    //for(int i=p; i>=1; i--){}
    for(int i = 1; i<=p; i++)
    {
       /*if (n%i==0 && m%i==0)
        {
            printf("%d ",i);
            break;
        }*/
        if (n%i==0 && m%i==0)
        {
            d=i;
        }
    
    }
    printf("%d",d);
    return 0;
}