//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

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
    printf("enter string 2 : ");
    scanf(" %[^\n]",str2);
    int l2=strlen(str2);
   
    if(strcmp(str,str2)==0)
    {
        printf("rotation");
    }
    else if(l != l2)
    {
        printf("no rotation");
    }
    else
    {
       char temp[2]={str[0],'\0'};
       int m = strcspn(str2,temp);
       int i1=0;
       int j1=m-1;
       int i2=m;
       int j2=l-1;
       while(i1<j1)
       {
         char temp=str2[i1];
         str2[i1]=str2[j1];
         str2[j1]=temp;
         i1++;
         j1--;
       }
       while(i2<j2)
       {
         char temp2=str2[i2];
         str2[i2]=str2[j2];
         str2[j2]=temp2;
         i2++;
         j2--;
       }
       int i=0;
       int j=l-1;
       while(i<j)
       {
        char temp3=str2[i];
         str2[i]=str2[j];
         str2[j]=temp3;
         i++;
         j--;
       }
       if(strcmp(str2,str)==0)
       {
        printf("rotation");

       }
       else
       {
        printf("no rotation");
       }

    }
}