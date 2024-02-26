#include <stdio.h>

int main() {
    float totalAmount;
    
    printf("Enter the total amount of goods bought: ");
    scanf("%f", &totalAmount);
    
    // Checking if the total amount is greater than or equal to 1000
    if (totalAmount >= 1000) {
        // Applying a 5% discount
        float discountedAmount = totalAmount * 0.95;
        printf(" You  received a 5%% discount. Your discounted amount is: $%.2f\n", discountedAmount);
    } else {
        // No discount applicable
        printf("no discount . Your total amount is: $%.2f\n", totalAmount);
    }
    
    return 0;
}