//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include<stdio.h>
#include<string.h>
int main()
{
    
    char str[50];
    printf("enter string : ");
    scanf("%[^\n]",str);
    int l=strlen(str);
    char str2[50];
    int max=0;
    int index=-1;
    char max_str[l];
    for(int i=0;i<=l;i++)
    {
        if(str[i]==' ' || str[i]=='\0')
        {
            str2[index+1]='\0';
            if(max<index+1)
            {
                max=index+1;
                strcpy(max_str,str2);
            }
            index=-1;
        }
        else
        {
            index++;
            str2[index]=str[i];
        }
    }
    printf("longest word : %s",max_str);

}