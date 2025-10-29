//Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("enter the string: ");
    scanf("%[^\n]s",str);
    for(int i = 0; str[i]!='\0'; i++)
    { if(str[i]>=97 && str[i]<=122)
       {str[i]=((int)str[i] - 32);}
       else
       {
        continue;
       }
    }
    puts(str);
    return 0;
}    