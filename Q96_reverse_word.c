//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    char str2[100];
    char str3[1000];
    str3[0]='\0';
    int index=-1;
    printf("enter string : ");
    scanf(" %[^\n]",str);
    int l= strlen(str);
    for (int i=0; i<=l; i++)
    { 
        if(str[i]==' ' || str[i]=='\0')
        {
            str2[index+1]='\0';
            int m=0;
            int n=index;
            while(m<n)
        {
          char temp3=str2[m];
          str2[m]=str2[n];
          str2[n]=temp3;
          m++;
          n--;
        }
         strcat(str3,str2);
         strcat(str3," ");
         index=-1;
        }
        else
        {
            index++;
            str2[index]=str[i];
        }
    }
    puts(str3);

}