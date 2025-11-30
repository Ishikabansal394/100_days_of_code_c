//Q120: Write a program to take a string input. Change it to sentence case.

/*
Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[200];
    printf("enter the string : ");
    scanf("%[^\n]",str);
    char str2[50];
    int index=-1;
    int l=strlen(str);
    char updated_str[200];
    updated_str[0]='\0';
    for(int i=0; i<=l; i++)
    {
        if(str[i]==' '|| str[i]=='\0')
        {
            str2[index+1]='\0';
            if((int)str2[0]>=97 && (int)str2[0]<=122)
            {
                str2[0]=(int)str2[0]-32;
            }
            
            strcat(updated_str,str2);
            strcat(updated_str," ");
            index=-1;
        }
       else
       { 
        index++;
        str2[index]=str[i];
       }

    }
    puts(updated_str);
}
