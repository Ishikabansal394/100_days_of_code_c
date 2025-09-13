// Q 15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/
#include <stdio.h>
int main()
{
    char ch;
    printf("enter the character");
    scanf("%c", &ch);
    if ((int)ch >= 65 && (int)ch <= 90)
    {
        printf("Uppercase Alphabet");
    }
    else if ((int)ch >= 97 && (int)ch <= 122)
    {
        printf("lowercase Alphabet");
    }
    else if ((int)ch >= 48 && (int)ch <= 57)
    {
        printf("Digit");
    }
    else
    {
        printf("Special character");
    }
}