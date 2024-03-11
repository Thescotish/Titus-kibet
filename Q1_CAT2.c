#include <stdio.h>

int main() {
    int customerId, unitsConsumed;
    char customerName[100];
    float chargePerUnit, totalAmount, surcharge = 0.0;

    // Prompt user to enter customerID,CustomerName and units consumed
    printf("Enter Customer ID: ");
    scanf("%d", &customerId);
    printf("Enter Customer Name: ");
    scanf("%s", customerName);
    printf("Enter Units Consumed: ");
    scanf("%d", &unitsConsumed);

    // Determine charge per unit based on units consumed
    if (unitsConsumed <= 300) {
        chargePerUnit = 175;
    } else if (unitsConsumed > 300 && unitsConsumed < 600) {
        chargePerUnit = 200;
    } else if (unitsConsumed >= 600 && unitsConsumed < 800) {
        chargePerUnit = 300;
    } else {
        chargePerUnit = 400;
    }

    // Calculate total amount without surcharge
    totalAmount = unitsConsumed * chargePerUnit;

    // Apply surcharge if total amount exceeds 500
    if (totalAmount > 500) {
        surcharge = 0.2 * totalAmount;
        totalAmount += surcharge;
    }

    // Ensure minimum bill is Kshs 200
    if (totalAmount < 200) {
        totalAmount = 200;
    }

    // Display customer details and total amount to pay
    printf("\nCustomer ID: %d\n", customerId);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", unitsConsumed);
    printf("Charges per Unit: Ksh %.2f\n", chargePerUnit);
    printf("Total Amount to Pay: Ksh %.2f\n", totalAmount);

    return 0;
}
