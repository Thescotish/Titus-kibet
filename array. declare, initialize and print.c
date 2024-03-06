#include <stdio.h>

int main() {
    // Declare a 3x3x2 array
    int array[3][3][2];

    // Initialize the array with some values
    int count = 1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 2; k++) {
                array[i][j][k] = count++;
            }
        }
    }

    // Print the array
    printf("The 3x3x2 array:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 2; k++) {
                printf("%d ", array[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}