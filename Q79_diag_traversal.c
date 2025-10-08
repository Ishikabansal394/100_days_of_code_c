//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

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
  for(int k=0; k<=(n-1)*2; k++)
    {
        for(int j=0; j<n; j++)
        {
           for(int i=0; i<m; i++)
            {
                if(i+j==k)
                {
                    printf("%d",mat[j][i]);
                }

            }
        }
        printf("\n");
    }
    return 0;

}