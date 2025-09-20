//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include<stdio.h>

int main()
{
    int n,d,result;
    printf("Enter a number:  ");
    scanf("%d",&n);
    int sum1 =0;
    while(n>0)
    {
        d=n%2;
        sum1=sum1*10+d;
        n=n/2;
    }
    printf("%d\n",sum1);
    int rev(int num);
    result = rev(sum1);
    printf("The binary equivalent of the number is %d",result);
    return 0;
}    
int rev(int num){
    int sum =0,d;
    while(num>0)
    {
        d=num%10;
        sum=sum*10+d;
        num=num/10;
    }
    return sum;
}

