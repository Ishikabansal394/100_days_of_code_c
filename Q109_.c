//Q109: Write a program to take an integer array arr and an integer k as inputs. 
// Print the maximum sum of all the subarrays of size k.

/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/
#include<stdio.h>
int main()
{
     int n;
    printf("enter the number of elements : ");
    scanf("%d",&n);
    int arr[n];
    int max_sum=0;
    
    printf("enter elements : ");
    for (int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int m;
    printf("enter subarray size : ");
    scanf("%d",&m);
    for(int i=0; i<n; i++ )
    { 
       for(int j=i; j<n; j++) 
       { int sum=0, count=0;
         for(int k=i; k<=j; k++)
         {
            sum=sum+arr[k];
            count++;
         }
         if(count==m && sum>max_sum)
       {
          max_sum=sum;
       }
       }
       
    }
    printf("%d",max_sum);
}