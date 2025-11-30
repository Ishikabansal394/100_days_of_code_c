//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include<stdio.h>
#include<string.h>
int main()
{
    
    char date[50];
    printf("enter string : ");
    scanf("%[^\n]",date);
    int l=strlen(date);
    char str2[50];
    date[2]='-';
    date[5]='-';
    for(int i=11;i>5;i--)
    {
      date[i]=date[i-1];
    }
    date[5]='r';
    date[4]='p';
    date[3]='A';
    printf("formatted date : %s",date);

}
