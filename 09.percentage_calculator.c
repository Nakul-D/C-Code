// A program to calculate percentage

#include <stdio.h>


void main() {

    char firstName[50], lastName[50];
    int prn;
    double marks[4] = {};

    printf("Student's first name: ");
    scanf("%s", &firstName);

    printf("Student's last name: ");
    scanf("%s", &lastName);

    printf("PRN: ");
    scanf("%d", &prn);

    for (int i = 0; i < 4; i++) {
        while (1) {
            double input;
            printf("Marks obtained in subject: ");
            scanf("%lf", &input);
            if (input <= 100) {
                marks[i] = input;
                break;
            }
            printf("\nWarning: Mark should not exceed 100\n\n");
        }
    }

    printf("\nStudent name: %s %s", firstName, lastName);
    printf("\nPRN: %d", prn);
    double total;
    for (int i = 0; i < 4; i++) {
        total += marks[i];
    }
    double percentage = (total * 100)/400;
    printf("\nPrecentage: %.2f", percentage);
    printf("\n\n");
}
