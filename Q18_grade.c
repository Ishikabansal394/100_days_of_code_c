/*Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
90-100: Grade A
80-89: Grade B
70-79: Grade C
60-69: Grade D
below 60: Grade F.*/

/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/
#include <stdio.h>
int main()
{
    int perc;
    printf("enter your percentage");
    scanf("%d", &perc);
    if (perc >= 90 && perc <= 100)
    {
        printf("Grade A");
    }
    else if (perc >= 80 && perc <= 89)
    {
        printf("Grade B");
    }
    else if (perc >= 70 && perc <= 79)
    {
        printf("Grade C");
    }
    else if (perc >= 60 && perc <= 69)
    {
        printf("Grade D");
    }
    else
    {
        printf("Grade F");
    }
    return 0;
}