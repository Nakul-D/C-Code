// Inverted half pyramid of stars
/*
* * *
* *
*
*/

#include <stdio.h>

void main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for (int i = n; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            printf("* ");
        }
        printf("\n");
    }
}
