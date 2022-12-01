// To swap two numbers without using third variable

#include <stdio.h>

void main() {

    int a, b;

    printf("Enter an integer (a): ");
    scanf("%d", &a);
    printf("Enter an integer (b): ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a = %d\n", a);
    printf("b = %d", b);
}
