//Q108: Write a Program to take an integer array nums. 
// Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. 
// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

/*
Sample Test Cases:
Input 1:
nums = [1,2,3,4]
Output 1:
[24,12,8,6]

Input 2:
nums = [-1,1,0,-3,3]
Output 2:
[0,0,9,0,0]

*/
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of elements : ");
    scanf("%d",&n);
    int arr[n];
    int ans[n];
    printf("enter elements : ");
    for (int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++)
    { 
        int prod=1;
        for(int j=i-1; j>=0; j--)
        {
            prod=prod*arr[j];
        }
        for(int k=i+1; k<n; k++)
        {
            prod=prod*arr[k];
        }
       ans[i]=prod;
      
    }
   for(int i=0; i<n; i++)
   {
    printf("%d\n",ans[i]);
   }
    
    return 0;
}
