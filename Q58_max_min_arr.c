//Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/
#include<stdio.h>
int main()
{
    int n;
    printf("enter no of elements : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of array : ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for (int i=1; i<n; i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
        else
        continue;
    }
    printf("max of elements in array = %d\n",max);

    
    int min = arr[0]; 
    for (int i=1; i<n; i++) 
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
        else
        continue;
    }
    
    printf("min of elements in array = %d\n",min);
    return 0;


}