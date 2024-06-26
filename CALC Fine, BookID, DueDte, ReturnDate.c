 //PROGRAME to calculateFine,bookID, dueDate, returnDate
#include <stdio.h>

void calculateFine(int bookID, int dueDate, int returnDate) {
    int daysOverdue = returnDate - dueDate;
    int fineRate, fineAmount;

    if (daysOverdue <= 7) {
        fineRate = 20;
    } else if (daysOverdue <= 14) {
        fineRate = 50;
    } else {
        fineRate = 100;
    }

    fineAmount = fineRate * daysOverdue;

    printf("Book ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Fine Rate: Ksh.%d per day\n", fineRate);
    printf("Fine Amount: Ksh.%d\n", fineAmount);
}

int main() {
    int bookID, dueDate, returnDate;

    // Input book ID, due date, and return date from the user
    printf("Enter Book ID: ");
    scanf("%d", &bookID);
    printf("Enter Due Date: ");
    scanf("%d", &dueDate);
    printf("Enter Return Date: ");
    scanf("%d", &returnDate);

    // Calculate and display fine information
    calculateFine(bookID, dueDate, returnDate);

    return 0;
}