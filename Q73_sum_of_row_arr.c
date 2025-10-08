//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include<stdio.h>
int main()
{
    int n,m;
    printf("enter no of required rows : ");
    scanf("%d",&n);
    printf("enter no of required columns : ");
    scanf("%d",&m);
    int mat[n][m];
    printf("enter elements : ");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    int arr[n];
    for(int i=0; i<n; i++)
    {   int sum=0;
        for(int j=0; j<m; j++)
        {   
            sum=sum+mat[i][j];
        }
        arr[i]=sum;

    }
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
   return 0;
}