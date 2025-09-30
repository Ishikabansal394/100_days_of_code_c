//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

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
    for(int i=0; i<n+m; i++)
    {
        printf("%d ",merge_arr[i]);
    }
    

 return 0;
}