//Q129: A file numbers.txt contains a list of integers separated by spaces.
// Read all integers, compute their sum and average, and print both.

/*
Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00

*/
#include<stdio.h>
#include<string.h>
int main()
{
    FILE* ptr= fopen("number.txt","r");
    if(ptr == NULL)
    {
        printf("file do not exist");
        return 0;
    }
    int sum=0;
    int s;
    int count=0;
    while(fscanf(ptr,"%d",&s)==1)
    {
        sum=sum+s;
        count++;
    }
    int avg=sum/count;
    printf("sum = %d\naverage = %d",sum,avg);
    return 0;
}