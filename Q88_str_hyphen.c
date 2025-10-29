//Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

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
        if(str[i]==' ')
        {
            str[i]='-';
        }
        else{
            continue;
        }
    }
    puts(str);
    return 0;
}