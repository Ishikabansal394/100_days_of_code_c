// Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, D, root1, root2;
    printf("Enter three coefficient of x^2, x, and c ");
    scanf("%d%d%d", &a, &b, &c);
    D = (pow(b, 2)) - (4 * a * c);
    if (D == 0)
    {
        root1 = (-b) / (2 * a);
        printf("roots are real and same : %d", root1);
    }
    else if (D > 0)
    {
        root1 = (-b + (pow(D, (1 / 2)))) / 2 * a;
        root2 = (-b - (pow(D, (1 / 2)))) / 2 * a;
        printf("roots are real and different : %d %d", root1, root2);
    }
    else
    {
        printf("roots are complex");
    }
    return 0;
}