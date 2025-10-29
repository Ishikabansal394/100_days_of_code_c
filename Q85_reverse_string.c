//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

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
    puts("original string : ");
    puts(str);
    int length=string_length(str);
    char str_rev[50];
    for (int i=0; str[i]!=0; i++)
    {
        str_rev[i]=str[length-1-i];
    }
    puts("reversed string : ");
    puts(str_rev);

}    