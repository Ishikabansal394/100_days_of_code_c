//Q135: Assign explicit values starting from 10 and print them.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
A=10
B=11
C=12

*/
#include <stdio.h>
int main() {
    enum letters { A = 10, B, C };
    const char *names[] = { "A", "B", "C" };
    
    for(int i = A; i <= C; i++) {
        printf("%s=%d\n", names[i - A], i);
    }

    return 0;
}
