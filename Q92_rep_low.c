//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("enter string : ");
    scanf("%[^\n]",str);
    int l=strlen(str);
    for(int i=0; i<l; i++)
    {  int count=0;
        for(int j=i+1; j<l; j++)
        {
            if(str[j]==str[i])
            {
                count++;
            }
        }
        if(count>0)
        {
            printf("%c",str[i]);
            break;
        }
        else continue;
    }
}