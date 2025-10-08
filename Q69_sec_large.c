//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include<stdio.h>
#include<limits.h>
int main()
{   int n;
    printf("enter no of elements : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of array : ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int s_max=INT_MIN,max=arr[0];
    for (int i=1; i<n; i++) 
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
        else
        {continue;}
    }
    for (int i=1; i<n; i++) 
    {
        if(s_max<arr[i] && arr[i]!=max)
        {
            s_max=arr[i];
        }
    }

    printf("second max of elements in array = %d",s_max);
    return 0;
}