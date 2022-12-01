// Compound interest
// Interest will be credited annually

#include <stdio.h>
#include <math.h>

double calculate_compound_interest(double principle, double years, double interest_rate) {
    return principle * pow((1 + interest_rate/100), years);
}

void main() {
    double principle, years, interest_rate;

    printf("\n");
    printf("Enter principle amount: ");
    scanf("%lf", &principle);
    printf("Enter number of years: ");
    scanf("%lf", &years);
    printf("Enter rate of interest (in %): ");
    scanf("%lf", &interest_rate);
    
    double final_amount = calculate_compound_interest(principle, years, interest_rate);

    printf("\nDeposit amount after %.0f years: %.2f\n\n", years, final_amount);

}
