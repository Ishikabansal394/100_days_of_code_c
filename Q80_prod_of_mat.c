//Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

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
    int p,q;
    printf("enter no of required rows : ");
    scanf("%d",&p);
    printf("enter no of required columns : ");
    scanf("%d",&q);
    int mat2[p][q];
    printf("enter elements : ");
    for(int i=0; i<p; i++)
    {
        for(int j=0; j<q; j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    for(int i=0; i<p; i++)
    {
        for(int j=0; j<q; j++)
        {
            printf("%d ",mat2[i][j]);
        }
        printf("\n");
    }
    
    if(m!=p)
    {
        printf("these two matrices can't be multiplied");
        
    }
    else
    {
    int prod[n][q];

       printf("product of these matrices are :- \n");
        for(int i=0; i<n; i++)
        {
          for(int j=0; j<q; j++)
         {  prod[i][j]=0;
            for(int k=0; k<m; k++)
            { 
                prod[i][j]=mat[i][k]*mat2[k][j] + prod[i][j];
                
            }
            
         }
        }
    
    
     for(int i=0; i<n; i++)
    {
        for(int j=0; j<q; j++)
        {
            printf("%d ",prod[i][j]);
        }
        printf("\n");
    }
}


}