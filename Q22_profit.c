// Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include <stdio.h>
int main()
{
    float sp, cp, profit, loss;
    printf("enter cp, sp");
    scanf("%f %f", &cp, &sp);
    if (cp < sp)
    {
        profit = ((sp - cp) / cp) * 100;
        printf("profit percrntage = %.1f %%", profit);
    }
    else if (cp > sp)
    {
        loss = ((cp - sp) / cp) * 100;
        printf("loss percrntage = %.1f %%", loss);
    }
    else
    {
        printf("no profit no loss");
    }
    return 0;
}