//Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

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
    int sum=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            sum=sum+mat[i][j];
        }
    }
   printf("Sum of matrix = %d",sum);
   return 0;
}