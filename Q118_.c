//Q118: Write a program to take an input array of size n. 
// The array should contain all the integers between 0 to n except for one. Print that missing number

/*
Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2

*/
#include<stdio.h>
int main()
{
    int n;
    printf("enter n :");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements :");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(int i=0; i<n+1; i++)
    {
        int temp=0;
        for(int j=0; j<n; j++)
        {
            if(arr[j]==i)
            {
                temp++;
            }
        }
        if(temp==0)
        {
            printf("%d",i);
            break;
        }
    }
}