//Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/
#include<stdio.h>
int main()
{
    int n;
    printf("enter no of elements : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of array : ");
    for(int i=n-1; i>=0; i--)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        printf("%d\n",arr[i]);
    }
 return 0;
}