// Full pyramid of numbers
/*
    1
  2 3 2
3 4 5 4 3
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
        int row_center;
        for (int k = 0; k < i; ++k) {
            printf("%d ", i + k);
            row_center = i + k;
        }
        for (int k = row_center; k > i; --k) {
            printf("%d ", k - 1);
        }
        printf("\n");
    }
}
