//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

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
    int m,temp=0;
    printf("enter element to be searched : ");
    scanf("%d",&m);
    for(int i=0; i<n; i++)
    {
        if(arr[i]==m)
        {
            printf("Found at index %d",i);
            temp=temp+1;
        }
        else
        {
            continue;
        }

    }
    if (temp==0)
    {
        printf("no match found");
    }
    return 0;
}   
