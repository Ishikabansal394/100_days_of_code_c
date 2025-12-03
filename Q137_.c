//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/
#include<stdio.h>
#include<string.h>
int main()
{
    enum roles { ADMIN, USER, GUEST };
    enum roles r;
    char str[25];
    printf("enter string : ");
    scanf("%[^\n]",str);
    if(strcmp(str,"ADMIN")==0) 
    {
        r=ADMIN;
    }
    else if(strcmp(str,"USER")==0) 
    {
        r=USER;
    }
    else if(strcmp(str,"GUEST")==0) 
    {
        r=GUEST;
    }
    switch(r){
        case ADMIN:
        printf("Welcome Admin!");
        break;
        case USER:
        printf("Welcome User!");
        break;
        case GUEST:
        printf("Welcome Guest!");
        break;
    }
}