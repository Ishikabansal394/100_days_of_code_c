//Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("enter string : ");
    scanf("%[^\n]",str);
    int l=strlen(str);
    for(int i=0; i<l; i++ )
    {
       for(int j=i; j<l; j++) 
       {
         for(int k=i; k<=j; k++)
         {
            printf("%c",str[k]);
         }
         printf("\n");
       }
    }
}