//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

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
        if(str[i]==' ' || str[i]=='\0')
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
        else
        {
            index++;
            str2[index]=str[i];
        }
    }
    printf("name initials : %s",initial);

}