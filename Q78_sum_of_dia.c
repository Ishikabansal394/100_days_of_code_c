//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include<stdio.h>
int main()
{
    int n, temp=0;
    printf("enter no of required rows and column : ");
    scanf("%d",&n);
    int mat[n][n];
    printf("enter elements : ");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i=0; i<n; i++)
    {  
        for(int j=0; j<n; j++)
        {   
            if(i==j)
            {
                temp=temp+mat[i][j];
            }

        }
    }
    printf("sum of main diagonal = % d",temp);
    
    return 0;

}