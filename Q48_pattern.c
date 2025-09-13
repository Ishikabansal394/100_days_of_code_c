/*Q48: Write a program to print the following pattern:
1
12
123
1234
12345
*/
/*
Sample Test Cases:
Input 1:

Output 1:
1
12
123
1234
12345

*/
#include <stdio.h>

int main()
{
    int n;
    printf("enter number of rows");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}