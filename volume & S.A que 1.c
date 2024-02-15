#include <stdio.h>
#include <math.h>

int main() {
    float radius, height, volume, surface_area;
    const float pi = 3.14159;

    // Prompt the user to enter radius and height
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    // Calculate volume and surface area
    volume = pi * radius * radius * height;
    surface_area = 2 * pi * radius * radius + 2 * pi * radius * height;

    // Display the calculated volume and surface area
    printf("Volume of the cylinder: %.2f cubic units\n", volume);
    printf("Surface area of the cylinder: %.2f square units\n", surface_area);

    return 0;
}