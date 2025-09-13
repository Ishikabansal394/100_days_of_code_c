//  Q 10 : Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include <stdio.h>
int main()
{
    float t_sec, sec, min, hrs, s, m, t_min;
    printf("enter total time in seconds");
    scanf("%f", &t_sec);
    s = t_sec / 60;
    if (s < 1)
    {
        printf("time : 0 hrs 0 mins %f secs", t_sec);
    }
    if (s == 1)
    {
        printf("time : 0 hrs 0 mins %f secs", t_sec);
    }
    if (s > 1)
    {
        sec = t_sec - ((int)s) * 60;
        t_min = ((int)s);
        m = t_min / 60;
        if (m < 1)
        {
            printf("time : 0 hrs %f mins %f secs", t_min, sec);
        }
        if (m == 1)
        {
            printf("time : 0 hrs %f mins %f secs", t_min, sec);
        }
        if (m > 1)
        {
            sec = t_sec - ((int)s) * 60;
            min = t_min - ((int)m) * 60;
            hrs = (int)m;
            printf("time : %f hrs %f mins %f secs", hrs, min, sec);
        }
    }
    return 0;
}
