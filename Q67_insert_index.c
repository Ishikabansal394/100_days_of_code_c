//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>

int main() {
    int n, m;
    printf("enter no of elements : ");
    scanf("%d", &n);
    printf("enter elements");
    int arr[n+1];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("enter element to be inserted : ");
    scanf("%d", &m);
    int p;
    printf("enter index where to be inserted : ");
    scanf("%d", &p);

    for(int i=n; i>p; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[p]=m;

    for(int j=0; j<n+1; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    return 0;
}
