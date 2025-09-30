//Q55: Write a program to print all the prime numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/
#include<stdio.h>
int main()
{   int n;
    printf("enter n");
    scanf("%d",&n);
    for ( int a=1; a<=n; a++)
    { int temp = 0;

        if (a <= 1)
       {
        temp = temp+1;
        continue;
        }

        for (int i = 2; i < a; i++)
       {
          if (a % i == 0)
         {
            temp=temp+1;
            continue;
         }
       }
       if (temp==0)
       {
        printf("%d\n",a);
       }
    }
    return 0;


 }    