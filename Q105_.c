//Q105: Write a program to take an integer array nums of size n, and print the majority element. 
// The majority element is the element that appears strictly more than ⌊n / 2⌋ times. 
// Print -1 if no such element exists. 
// Note: Majority Element is not necessarily the element that is present most number of times.

/*
Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3

Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2

Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1

*/
#include<stdio.h>
int main()
{
    int n;
    
    printf("enter the number of elements : ");
    scanf("%d",&n);
    int arr[n];
    int temp[n];
    int flag=0;
    printf("enter elements : ");
    for (int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        temp[i]=0;
    }
    for (int i=0; i<n; i++)
    {
        int count=0;
        if(temp[i]==1)
        {
            continue;
        }
        for(int j=0; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                temp[j]=1;
            }
        }
        if(count>(n/2))
        {
            printf("%d,%d",arr[i],count);
            flag++;
        }
    }
    if (flag==0)
    {
        printf("-1");
    }
    return 0;
}