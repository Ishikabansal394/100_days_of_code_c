//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,temp,sum=0,count=0,m,p;
    printf("enter n :");
    scanf("%d",&n);
    temp=n;

    while(temp>0)
    {
       count=count+1;
       temp=temp/10;
    }
    printf("total digits is %d\n",count);
    int l;
    l=n%10;
    m=n/10;
    printf("last digit = %d\n",l);
    int f;
    f=(n-(n%((int)pow(10,(count-1)))))/((int)pow(10,(count-1)));
    printf("first digit = %d\n",f);
    int new;
    new=(l*((int)pow(10,count-1)))+((m%((int)pow(10,count-2)))*10)+f;
    printf("new number after swap = %d",new);
    return 0;
}   