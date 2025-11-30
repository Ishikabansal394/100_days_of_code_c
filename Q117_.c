//Q117: Write a program to take two sorted arrays of size m and n as input. 
//Merge both the arrays such that the merged array is also sorted. Print the merged array.

/*
Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/
#include<stdio.h>
int main()
{
    int n;
    printf("enter no of elements : ");
    scanf("%d",&n);
    int arr1[n];
    printf("enter elements of array : ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr1[i]);
    }
    int m;
    printf("enter no of elements : ");
    scanf("%d",&m);
    int arr2[m];
    printf("enter elements of array : ");
    for(int i=0; i<m; i++)
    {
        scanf("%d",&arr2[i]);
    }
    int merge_arr[m+n];
    for(int i=0; i<n; i++)
    {
        merge_arr[i]=arr1[i];
    }
    
     for(int i=n; i<n+m; i++)
    {
        merge_arr[i]=arr2[i-n];
         
    }
    for (int i = 0; i < m+n - 1; i++) {
    
        for (int j = 0; j < m+n - i - 1; j++) {
            
            if (merge_arr[j] > merge_arr[j + 1]) {
            
                int temp = merge_arr[j];
                merge_arr[j] = merge_arr[j + 1];
                merge_arr[j + 1] = temp;
            }
        }
    }
    for(int i=0; i<n+m; i++)
    {
        printf("%d ",merge_arr[i]);
    }
    

 return 0;
}