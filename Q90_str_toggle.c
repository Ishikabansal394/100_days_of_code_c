//Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

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
       else if(str[i]>=65 && str[i]<=90)
       {
        str[i]=(int)str[i]+32;
       }
       else
       {
        continue;
       }
    }
    puts(str);
    return 0;
}    