//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>

int main() {
    int n, m;
    printf("enter no of elements : ");
    scanf("%d", &n);

    int arr[n+1];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("enter element to be inserted : ");
    scanf("%d", &m);

    int i = n - 1;
    while(i >= 0 && arr[i] > m) {
        arr[i+1] = arr[i];
        i--;
    }
    arr[i+1] = m;

    for(int j=0; j<n+1; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    return 0;
}
