//Q131: Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
SUNDAY = 0
MONDAY = 1
TUESDAY = 2
WEDNESDAY = 3
THURSDAY = 4
FRIDAY = 5
SATURDAY = 6

*/
#include<stdio.h>
int main()
{
    enum day { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

    printf("SUNDAY = %d\n",Sunday);
    printf("MONDAY = %d\n",Monday);
    printf("TUESDAY = %d\n",Tuesday);
    printf("WEDNESDAY = %d\n",Wednesday);
    printf("THURSDAY = %d\n",Thursday);
    printf("FRIDAY = %d\n",Friday);
    printf("SATURDAY = %d\n",Saturday);

return 0;
        
}