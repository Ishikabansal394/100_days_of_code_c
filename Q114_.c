//Q114: Write a program to take a string s as input. 
// The task is to find the length of the longest substring without repeating characters. 
// Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3


Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],str2[500];
    printf("enter the string : ");
    scanf("%[^\n]",str);
    int l= strlen(str);
    int index=0;
    int arr[100];
     for(int i=0; i<l; i++ )
    {
       for(int j=i; j<l; j++) 
       { int count=0, temp=0;
         for(int k=i; k<=j; k++)
         {
            for(int m=k+1; m<=j; m++)
            {
                if(str[m]==str[k])
                {
                    temp++;
                }
            }
             for(int n=k-1; n>=i; n--)
            {
                if(str[n]==str[k])
                {
                    temp++;
                }
            }
            count++;
         }
         if(temp==0)
         {
            arr[index]=count;
            index++;
         }
       }
    }
    int max=arr[0];
      for (int i=1; i<index; i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
        else
        continue;
    }
    printf("%d\n",max);
}
