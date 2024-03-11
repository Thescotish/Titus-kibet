//program to compare numbers entered by a user
#include <stdio.h>

int main() {
    int number;
    
    printf("Enter an integer number: ");
    scanf("%d", &number); // Corrected the format specifier to %d and added a closing parenthesis after &number
    
    if (number < 100) {
        printf("Your number is smaller than 100\n"); // Added a missing opening parenthesis and a newline character
    } else {
        printf("Your number contains more than two digits\n"); // Added a newline character
    }

    return 0;
}

