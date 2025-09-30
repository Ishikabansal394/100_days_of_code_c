//Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
#include <stdio.h>

int main() {
    int n;
    int count1=0,count2=0,count3=0;
    printf("number of elements :");
    scanf("%d",&n);
    int arr[50];
    printf("enter the elements for the array");
    
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
       
    }
    for (int i=0; i<n; i++)
    {   
        if(arr[i]==0)
        {
           count1=count1 + 1; 
        }
        else if(arr[i]>0)
        {
            count2=count2 + 1;
        }
        else
        {
            count3=count3 +1;
        }
    }
        printf("no of positive elements is %d\n",count2);
        printf("no of negitive elements is %d\n",count3);
        printf("no of zero elements is %d\n",count1);


    return 0;
}