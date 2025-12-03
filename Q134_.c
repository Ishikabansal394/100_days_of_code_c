//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/
#include<stdio.h>
#include<string.h>
int main()
{
    enum res {SUCCESS, FAILURE, TIMEOUT};
    enum res r;
    char str[25];
    printf("enter input : ");
    scanf("%[^\n]",str);
    if(strcmp(str,"SUCCESS")==0) 
    {
        r=SUCCESS;
    }
    else if(strcmp(str,"FAILURE")==0) 
    {
        r=FAILURE;
    }
    else if(strcmp(str,"TIMEOUT")==0) 
    {
        r=TIMEOUT;
    }
    switch(r){
        case SUCCESS:
        printf("Operation Successful");
        break;
        case FAILURE:
        printf("Operation Failed");
        break;
        case TIMEOUT:
        printf("Operation timeout");
        break;
    }
    return 0;
    
}