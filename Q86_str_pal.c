//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include<stdio.h>
#include<string.h>
int string_length(char str[]){
    int len=0;
    for(int i=0; str[i]!=0; i++)
    {
        len++;
    }
    return len;
}
int main()
{
    char str[50];
    printf("enter the string: ");
    scanf("%[^\n]s",str);
   
    int length=string_length(str);
    char str_rev[50];
    for (int i=0; str[i]!=0; i++)
    {
        str_rev[i]=str[length-1-i];
    }
    int temp=0;
   for(int i=0; i<length; i++)
   {
      if(str[i]==str_rev[i])
      {
        continue;
      }
      else
      {
        printf("string is not pallindromic");
        temp++;
        break;
      }
      
   }
   if(temp==0)
   {
    printf("string is pallindromic");

   }
   return 0;
}    
