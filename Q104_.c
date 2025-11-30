//Q104: Write a Program to take a positive integer n as input, 
// and find the pivot integer x such that the sum of all elements between 1 and 
// x inclusively equals the sum of all elements between x and n inclusively. 
// Print the pivot integer x. If no such integer exists, print -1. 
// Assume that it is guaranteed that there will be at most one pivot integer for the given input.

/*
Sample Test Cases:
Input 1:
n = 8
Output 1:
6

Input 2:
n = 1
Output 2:
1

Input 3:
n = 4
Output 3:
-1

*/
#include<stdio.h>
int main()
{
    int n;
    int temp=1;
    printf("enter the number of elements : ");
    scanf("%d",&n);
    int arr[n];
    for (int i=0; i<n; i++)
    {
       arr[i]=temp;
       temp++;
    }
    for(int i=0; i<n; i++)
    {
        printf("%d\n",arr[i]);
    }
    for(int i=0; i<n; i++)
    { 
        int sum_l=0;
        int sum_r=0;
        for(int j=i-1; j>=0; j--)
        {
            sum_l=sum_l+arr[j];
        }
        for(int k=i+1; k<n; k++)
        {
            sum_r=sum_r+arr[k];
        }
        if(sum_l==sum_r)
        {
            printf("%d",arr[i]);
            return 0;
        }
      
    }
    printf("-1");
    
    return 0;
}
