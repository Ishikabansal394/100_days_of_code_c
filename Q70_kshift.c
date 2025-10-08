//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include <stdio.h>

int main() {
     int n;
    printf("number of elements :");
    scanf("%d",&n);
    
    int arr[50];
    printf("enter the elements for the array");
    
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
       
    }
    int k;
    printf("enter k :");
    scanf("%d",&k);
    int arr2[n];
    if(k>n)
    {
        k=k%n;
    }
    for(int i=0; i<n; i++)
    {
       int p=i+k;
        if (p<n)
        {  
            arr2[p]=arr[i];

        }
        else
        {
            arr2[p-n]=arr[i];
       }
    }
    for(int i=0; i<n; i++)
    printf("%d\n",arr2[i]);
    
    return 0;
}