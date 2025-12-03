//Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/
#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct details{ enum gender { MALE,FEMALE} gen;} det;
    det a;
    char str[34];
    printf("enter gender : ");
    scanf("%[^\n]",str);
    if ( strcmp(str + 7,"MALE")==0)
    {
        a.gen=MALE;
    }
    else
    {
        a.gen=FEMALE;
    }
    switch(a.gen)
    {
        case MALE:
        printf("Male");
        break;
        case FEMALE:
        printf("Female");
        break;
    }
    return 0;
}
