//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

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
    {   if (temp==1)
            {
                break;
            }
        for(int j=i+1; j<n; j++)
        {   
            if(mat[i][i]==mat[j][j])
            {
                printf("false");
                temp++;
                break;
            }
        }
    }
    if (temp==0)
    {
        printf("true");
    }
    
    return 0;

}