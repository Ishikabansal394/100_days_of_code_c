//Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). 
// The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. 
// Print "Anagram" if they are, otherwise "Not Anagram".

/*
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

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
    int temp[50]={0};
    int temp2[50]={0};
    if(l != l2)
    {
        printf("they can not be anagrams");
        return 0;
    }
    int count=0;
    for( int i=0; i<l; i++ )
    {
       for ( int j=0; j<l; j++)
       {
        
        if(str[i]==str2[j])
        {   if(temp[j]==1)
            {
                break;
            }
            count++;
            temp[j]++;
        }
       }
    }
    if (count>=l)
    {
        printf("Anagrams");
    }
    else
    {
        printf("Not Anagrams");
    }
}