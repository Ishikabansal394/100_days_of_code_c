//Q138: Print all enum names and integer values using a loop.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/
#include <stdio.h>

enum Color {
    RED,
    GREEN,
    BLUE,
    YELLOW
};

int main() {
    enum Color colors[] = {RED, GREEN, BLUE, YELLOW};
    char names[4][25] = {"RED", "GREEN", "BLUE", "YELLOW"};

    for (int i = 0; i < 4; i++) {
        printf("%s = %d\n", names[i], colors[i]);
    }

    return 0;
}
