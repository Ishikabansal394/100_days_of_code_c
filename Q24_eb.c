/*Q24: Write a program to calculate electricity bill based on units consumed with these rates:
First 100 units at ₹5/unit
Next 100 units at ₹7/unit
Next 100 units at ₹10/unit
Above at ₹12/unit*/

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/
#include <stdio.h>
int main()
{
    int units, eb;
    printf("enter the number of units :");
    scanf("%d", &units);
    if (units <= 100)
    {
        eb = units * 5;
        printf("Electricity Bill is ₹%d", eb);
    }
    else if (units <= 200 && units > 100)
    {
        eb = 500 + ((units - 100) * 7);
        printf("Electricity Bill is ₹%d", eb);
    }
    else if (units <= 300 && units > 200)
    {
        eb = 500 + 700 + ((units - 200) * 10);
        printf("Electricity Bill is ₹%d", eb);
    }
    else if (units > 300)
    {
        eb = 500 + 700 + 1000 + ((units - 300) * 12);
        printf("Electricity Bill is ₹%d", eb);
    }
    return 0;
}