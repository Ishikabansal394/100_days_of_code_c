//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include<stdio.h>
int main()
{
    int n,m,temp=0;
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
   if(m!=n)
   {
     printf("False because m is not equal to n");
   }
   else
   {
    int trans[m][n];
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            trans[i][j]=mat[j][i];
        }
    }
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {   if(temp==1)
            {
                break;
            }
            if(mat[i][j]!=trans[i][j])
            {
                printf("False");
                temp++;
                break;
            }
           
        }
   
    }
} 
if (temp==0)
{
    printf("True");
}
 return 0;
}    