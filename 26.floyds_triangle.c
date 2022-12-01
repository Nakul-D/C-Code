// Floyed's triangle
/*
1
2 3
4 5 6
7 8 9 10
*/

#include <stdio.h>

void main() {
    int rows, number = 1;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j <= i; ++j) {
            printf("%d ", number);
            ++number;
        }
        printf("\n");
    }
}
