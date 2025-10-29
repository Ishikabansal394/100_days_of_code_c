//Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

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
    printf("length of string is %d",length);
    return 0;
}