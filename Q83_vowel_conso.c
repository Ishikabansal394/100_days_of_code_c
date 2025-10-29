//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include<stdio.h>
#include<string.h>
int main()
{  int vowels=0,consonents=0;
    char str[50];
    printf("enter the string: ");
    scanf("%[^\n]s",str);
    for(int i = 0; str[i]!='\0'; i++)
    {
        if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u')
        {
            vowels++;
        }
        else
        {
            consonents++;
        }
    }
    printf("vowels = %d\n",vowels);
    printf("consonents = %d\n",consonents);
    return 0;
}    
