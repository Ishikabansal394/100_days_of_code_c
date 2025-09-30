/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*


*/



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of rows required (Odd): ");
    scanf("%d", &n);
    for (int i = 1; i <= (n+1)/2; i++)
    {   
        for (int j = 2*i-1; j >= 1; j--)
        {
            printf("*\n");
        }
        printf("\n");
    }
    int b=2*(n-((n+1)/2))-1;
    for (int a = 1; a <= n-((n+1)/2); a++)
    {   
        
        for (int j =1; j <= b ; j++)
        {
            printf("*\n");
        }
        printf("\n");
        b=b-2;
    }
    return 0;
}