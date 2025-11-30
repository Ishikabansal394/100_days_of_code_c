//Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

/*
Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
 nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
 nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5

*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    int arr[n],temp[n];
    printf("enter array elements : ");
    for (int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int key;
    int index=0;
    printf("enter the number to find : ");
    scanf("%d",&key);
    for (int i=0; i<n; i++)
    {
        if(arr[i]==key)
        {
            temp[index]=i;
            index++;

        }
        else
        continue;
    }
    if(index==0)
    {
        printf("-1,-1");
    }
    else
    {
        printf("%d,%d",temp[0],temp[index-1]);
    }


return 0;
    
}
