//Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

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
    int add[n][m];
    
    if(n!=p || m!=q)
    {
        printf("these two matrices can't be added");
    }
    else
    {   printf("sum of these matrices are :- \n");
        for(int i=0; i<n; i++)
        {
          for(int j=0; j<m; j++)
         {
            add[i][j]= mat[i][j]+mat2[i][j];
            
         }
        }
    
    
     for(int i=0; i<p; i++)
    {
        for(int j=0; j<q; j++)
        {
            printf("%d ",add[i][j]);
        }
        printf("\n");
    }
} 

}