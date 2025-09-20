//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include<stdio.h>
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

int main()

{
    int n,d,sum=0,result;
    printf("Enter a binary number:  ");
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        if(d==0)
        {
           sum=sum*10+1;
        }
        else if(d==1)
        {
            sum=sum*10+0;
        }
        n=n/10;

    }
    result=rev(sum);
    printf("ones complement = %d",result);
    return 0;
}