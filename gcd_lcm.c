//GCD - Greatest common denominator of 2 numbers
//LCM - Lowest common multiple of 2 numbers

#include <stdio.h>

void main() {

    int num1, num2, numerator, denominator, remainder, gcd, lcm;

    printf("Enter 2 integers: ");
    scanf("%d%d", &num1, &num2);

    if (num1 > num2) {
        numerator = num1;
        denominator = num2;
    } else {
        numerator = num2;
        denominator = num1;
    }
    remainder = numerator % denominator;

    while (remainder != 0) {
        numerator = denominator;
        denominator = remainder;
        remainder = numerator % denominator;
    }

    gcd = denominator;
    lcm = num1 * num2 / gcd;

    printf("GCD of %d and %d is %d", num1, num2, gcd);
    printf("\nLCM of %d and %d is %d", num1, num2, lcm);
}
