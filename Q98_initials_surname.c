//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

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
    char initial[50];
    char temp[3];
    int index=-1;
    for(int i=0;i<=l;i++)
    {
        if(str[i]==' ')
        {
            temp[0]=str2[0];
            temp[1]= '.';
            temp[2]='\0';
            strcat(initial,temp);
            temp[0]=0;
            temp[1]=0;
            temp[2]=0;
            index=-1;
        }
        else if(str[i]=='\0')
        {
            str2[index+1]='\0';
            strcat(initial,str2);
        }
        else
        {
            index++;
            str2[index]=str[i];
        }
    }
    printf("name initials : %s",initial);

}