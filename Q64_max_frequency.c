//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main() {
    int n,m,max_no,d;
    int count1;
    printf("enter the number :");
    scanf("%d",&n);
    int temp1=n, count=0;
    while(temp1>0)
    {
       count=count+1;
       temp1=temp1/10;
    }
    m=count;
    int arr[m],temp[m];
    int max=0;
    int k=m-1;
    
    while(n>0)
    {
        d=n%10;
        arr[k]=d;
        k--;
        n=n/10;
     }
    
    for(int i=0; i<m; i++)
    {
        printf("%d\n",arr[i]);
    }
    
    for(int i=0; i<m; i++)
    {
        
        temp[i]=0;
       
    }
    for (int i=0; i<m; i++)
    {  if (temp[i]==1)
        {
            continue;
        }

       count1=0; 

       
       
          for(int j=0; j<m; j++)
         {  
           if(arr[j]==arr[i])
           {
               count1=count1+1;
               temp[j]=1;
           }
           else
           {
               continue;
           }
         } 
        
        if (count1>max)
        {
            max=count1;
            max_no=arr[i];
        }
       
    }
    printf("%d",max);
    printf("the element that appears the most is %d",max_no);
       

    return 0;
}