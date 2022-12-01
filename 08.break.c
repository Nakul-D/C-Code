// A program to try break statement
/*
The program would have printed numbers from 1 to 9
But the break statement will stop the loop after 5
*/

#include <stdio.h>

void main() {
    int a = 1;
    while (a < 10) {
        if (a > 5) {
            break;
        }
        printf("\n%d", a);
        a += 1;
    }
}
