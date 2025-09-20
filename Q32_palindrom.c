//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

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
            sum = sum * 10 + d;
            p = p / 10;
        }

        if (sum == temp)
        {
            printf("%d is palindromic", sum);

        }
        else
        {
            printf("not palindromic");
        }
    
    return 0;
}