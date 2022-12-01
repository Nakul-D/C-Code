// Full pyramid of stars
/*
    * 
  * * *
* * * * *
*/

#include <stdio.h>

void main() {
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; ++i) {
        for (int j = 0; j < (rows - i); ++j) {
            printf("  ");
        }
        for (int j = 0; j < i * 2 - 1; ++j) {
            printf("* ");
        }
        printf("\n");
    }
}
