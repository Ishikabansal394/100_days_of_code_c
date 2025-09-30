//Q50: Write a program to print the following pattern:
//*****
 //****
  //***
   //**
    //*

/*
Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/


#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of rows required : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= i - 1; k++)
        {
            printf(" ");
        }

        for (int j = n; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}