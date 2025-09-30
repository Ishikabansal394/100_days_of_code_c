/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
*/

/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/
#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of rows required (Odd): ");
    scanf("%d", &n);
    for (int i = 1; i <= (n+1)/2; i++)
    {   
        for (int k=1; k<=((n+1)/2)-i; k++)
        {
            printf(" ");
        }
        for (int j = 2*i-1; j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    int b=2*(n-((n+1)/2))-1;
    for (int a = 1; a <= n-((n+1)/2); a++)
    {   
        for (int m=1; m<=a; m++)
        {
            printf(" ");
        }
        for (int j =1; j <= b ; j++)
        {
            printf("*");
        }
        printf("\n");
        b=b-2;
    }
    return 0;
}