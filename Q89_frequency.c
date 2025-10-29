//Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include<stdio.h>
#include<string.h>
int main()
{  int digits=0,spaces=0,special=0,temp=0;
    char n;
    char str[50];
    printf("enter the string: ");
    scanf("%[^\n]s",str);
    printf("enter the character: ");
    scanf(" %c",&n);
    for(int i = 0; str[i]!='\0'; i++)
    {
        if(str[i]==n)
        {
            temp++;
        }
        else 
        {
            continue;
        }
    }
    printf("the frequency of %c in the string is %d",n,temp);
    return 0;
}