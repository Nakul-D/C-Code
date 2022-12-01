// A program to calculate area and circumference of a circle

#include <stdio.h>


void main() {

    double radius;
    double pie = 3.14;

    printf("Enter radius of the circle: ");
    scanf("%lf", &radius);
    printf("area: %.2f", pie * radius * radius);
    printf("\ncircumference: %.2f", 2 * pie * radius);
}
