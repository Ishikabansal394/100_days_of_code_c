//Q113: Write a program to take an integer array arr and an integer k as inputs.
// The task is to find the kth smallest element in the array. Print the kth smallest element as output.

/*
Sample Test Cases:
Input 1:
arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
Output 1:
5

Input 2:
arr[] = [7, 10, 4, 3, 20, 15], k = 3
Output 2:
7

*/
#include<stdio.h>
#include<limits.h>

int min_arr(int arr[], int n, int min)
{
    int min_k = INT_MAX;

    for(int i=0; i<n; i++)
    {
        if(arr[i] > min && arr[i] < min_k)
            min_k = arr[i];
    }

    return min_k;
}

int main()
{
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    printf("Enter k: ");
    scanf("%d", &k);


    int min = INT_MAX;
    for(int i=0; i<n; i++)
        if(arr[i] < min)
            min = arr[i];

    for(int i=2; i<=k; i++)
        min = min_arr(arr, n, min);

    printf("%d", min);
    return 0;
}
