//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include<stdio.h>
#include<string.h>
int main()
{
    int n,m;
    printf("Enter numbers: ");
    scanf("%d %d",&n,&m); 
    enum cal {ADD, SUBTRACT, MULTIPLY};
    enum cal c;
    char str[25];
    printf("enter input : ");
    scanf(" %[^\n]",str);
    if(strcmp(str,"ADD")==0) 
    {
        c=ADD;
    }
    else if(strcmp(str,"FAILURE")==0) 
    {
        c=SUBTRACT;
    }
    else if(strcmp(str,"TIMEOUT")==0) 
    {
        c=MULTIPLY;
    }
    switch(c){
        case ADD:
        printf("%d",n+m);
        break;
        case SUBTRACT:
        printf("%d",n-m);
        break;
        case MULTIPLY:
        printf("%d",n*m);
        break;
    }
}
