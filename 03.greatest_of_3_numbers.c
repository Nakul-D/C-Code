// Program to find out greatest of 3 numbers

#include <stdio.h>

void main() {
    int a, b, c;

    printf("Enter 3 numbers:\n");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b && a > c) {
        printf("%d is the greatest", a);
    }
    if (b > a && b > c) {
        printf("%d is the greatest", b);
    }
    if (c > a && c > b) {
        printf("%d is the greatest", c);
    }
    if (a == b && b == c) {
        printf("All the numbers are equal");
    }
}
