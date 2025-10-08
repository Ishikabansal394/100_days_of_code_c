//Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include <stdio.h>

int main() {
    int n, m;
    printf("enter no of elements : ");
    scanf("%d", &n);
    printf("enter elements");
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("enter index to be deleted : ");
    scanf("%d", &m);
    if(m<0 || m>=n)
    {
        printf("invalid input");
    }
    else
    {
        for(int i = m; i<n-1; i++)
        {
            arr[i]=arr[i+1];
        }
    }
    for(int j=0; j<n-1; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");


} 