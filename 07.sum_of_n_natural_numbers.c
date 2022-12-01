// Program to find sum of first n natural numbers

#include <stdio.h>

void main() {

    int n, sum;

    printf("Enter n:\n");
    scanf("%d", &n);

    sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum of first %d is %d", n, sum);
}
