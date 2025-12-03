//Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/
#include<stdio.h>
#include<string.h>
int main()
{
    enum months {JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};
    enum months m;
    char mon[50];
    printf("enter abb for month in uppercase : ");
    scanf("%[^\n]",mon);
    if(strcmp(mon,"JAN")==0)
    {
        m=JAN;
    }
    else if(strcmp(mon,"FEB")==0)
    {
        m=FEB;
    }
    else if(strcmp(mon,"MAR")==0)
    {
        m=MAR;
    }
    else if(strcmp(mon,"APR")==0)
    {
        m=APR;
    }
    else if(strcmp(mon,"MAY")==0)
    {
        m=MAY;
    }
    else if(strcmp(mon,"JUN")==0)
    {
        m=JUN;
    }    
    else if(strcmp(mon,"JUL")==0)
    {
        m=JUL;
    }
    else if(strcmp(mon,"AUG")==0)
    {
        m=AUG;
    }
    else if(strcmp(mon,"SEP")==0)
    {
        m=SEP;
    }
    else if(strcmp(mon,"OCT")==0)
    {
        m=OCT;
    }
    else if(strcmp(mon,"NOV")==0)
    {
        m=NOV;
    }
    else if(strcmp(mon,"DEC")==0)
    {
        m=DEC;
    }
    switch(m)
    {
        case JAN :
        printf("31 days");
        break;
        case FEB :
        printf("28 or 29 days");
        break;
        case MAR :
        printf("31 days");
        break;
        case APR :
        printf("30 days");
        break;
        case MAY :
        printf("31 days");
        break;
        case JUN :
        printf("30 days");
        break;
        case JUL :
        printf("31 days");
        break;
        case AUG :
        printf("31 days");
        break;
        case SEP :
        printf("30 days");
        break;
        case OCT :
        printf("31 days");
        break;
        case NOV :
        printf("30 days");
        break;
        case DEC :
        printf("31 days");
        break;
    }
    return 0;
}
