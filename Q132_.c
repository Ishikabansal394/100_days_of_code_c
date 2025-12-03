//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and 
//print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/
#include<stdio.h>
int main()
{
    enum lights { Red, Yellow, Green };
    enum lights l;
    int n;
    printf("Enter light colour : ");
    scanf("%d",&n);
    l = (enum lights)n;
    switch (l)
    {
        case Red :
        printf("Stop");
        break;
         
        case Yellow :
        printf("WAIT");
        break;

        case Green :
        printf("GO");
        break;
    }
    return 0;


}