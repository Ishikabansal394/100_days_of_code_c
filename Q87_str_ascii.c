//Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/
#include<stdio.h>
#include<string.h>
int main()
{  int digits=0,spaces=0,special=0;
    char str[50];
    printf("enter the string: ");
    scanf("%[^\n]s",str);
    for(int i = 0; str[i]!='\0'; i++)
    {
       if((int)str[i]>=48 && (int)str[i]<=57)
       {
         digits++;
       }
       else if((int)str[i]>=65 && (int)str[i]<=90)
       {
          continue;
       }
       else if((int)str[i]>=97 && (int)str[i]<=122)
       {
          continue;
       }
       else if(str[i]==' ')
       {
         spaces++;
       }
       else
       {
         special++;
       }
    }
    printf("Spaces = %d, Digits = %d, Special = %d",spaces,digits,special);
    return 0;
}