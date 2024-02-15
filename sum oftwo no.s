#include <stdio.h>

int main() {
    int a, b, sum;

    // Prompt the user to enter the first number (a)
    printf("Enter the first number (a): ");
    scanf("%d", &a);

    // Prompt the user to enter the second number (b)
    printf("Enter the second number (b): ");
    scanf("%d", &b);

    // Add the numbers together
    sum = a + b;

    // Display the result
    printf("The sum of %d and %d is: %d\n", a, b, sum);

    return 0;
}