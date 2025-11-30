//Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include<stdio.h>
#include<string.h>
int main()
{  int temp=0;
    char str[50];
    printf("enter the string: ");
    scanf("%[^\n]s",str);
    int l= strlen(str);
    printf("%d\n",l);
    for(int i = 0; i<l; i++)
    {   
        
        
        if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u' || str[i]=='A'|| str[i]=='E'|| str[i]=='I'|| str[i]=='O'|| str[i]=='U' )
        {
           for( int j=i; j<l; j++)
            {
                str[j]=str[j+1];
               
            }
            i--;
            
        }
        else
        {
            continue;
        }
        
        
    }
    

    puts(str);
}