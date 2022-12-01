// Half pyramid of alphabets
/*
A
BB
CCC
*/

#include <stdio.h>

void main() {
    char alphabet = 'A';
    char input;
    printf("Enter the uppercase alphabet you want in the last row: ");
    scanf("%c", &input);
    for (int i = 1; i <= (input - 'A' + 1); ++i) {
        for (int j = 1; j <= i; ++j) {
            printf("%c ", alphabet);
        }
        printf("\n");
        ++alphabet;
    }
}
