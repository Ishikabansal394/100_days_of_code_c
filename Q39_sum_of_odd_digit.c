//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include<stdio.h>
int main()
{   int p,d,prod=1,temp;
    printf("enter number : ");
    scanf("%d",&p);
    temp=p;
    while(p>0)
    {
       d=p%10;
       if(d%2!=0)
       {
        prod=prod*d;
       }
       else if (d%2==0)
       {
        prod=prod*1;
       }
       p=p/10;
    }
    printf("%d",prod);
    return 0;
}    