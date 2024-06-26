//Programe to calculate compound interest
 #include <stdio.h>
#include <math.h>

int main() {
    int p, t;
    double rate, compoundInterest;

    // Input principal amount (p) and time period (t)
    printf("Enter principal amount: ");
    scanf("%d", &p);

    printf("Enter time period (in years): ");
    scanf("%d", &t);

    // Input annual interest rate as a decimal value
    printf("Enter annual interest rate (in percentage): ");
    scanf("%lf", &rate);

    // Convert rate of interest from percentage to decimal
    rate = rate / 100;

    // Calculate compound interest
    compoundInterest = p * (pow((1 + rate), t)) - p;

    // Print the result
    printf("Compound interest = %.2lf\n", compoundInterest);

    return 0;
}