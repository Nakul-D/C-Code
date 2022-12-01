// Simple interest calculator
// Interest will be credited annually

#include<stdio.h>


void main() {
    double principle, years, interest_rate, interest_amount, final_amount;

    printf("\n");
    printf("Enter principle amount: ");
    scanf("%lf", &principle);
    printf("Enter number of years: ");
    scanf("%lf", &years);
    printf("Enter rate of interest (in %): ");
    scanf("%lf", &interest_rate);

    interest_amount = (principle * interest_rate)/100;

    printf("\nAnnual interest amount: %.2f\n", interest_amount);

    final_amount = principle;
    for (int i = 0; i < years; i++) {
        final_amount += interest_amount;
    }

    printf("\nDeposit amount after %.0f years: %.2f\n\n", years, final_amount);
}
