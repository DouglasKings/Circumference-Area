#include <stdio.h>
#include <math.h>

// Define PI
#define PI 3.14159265359

// Function prototypes
double calculateCircumference(double Radius);
double calculateArea(double Radius);

int main() {
    double Radius, Circumference, Area;

    printf("Enter the radius: ");
    scanf("%lf", &Radius); // Change %d to %lf to read a double

    // Calculate and print the circumference
    Circumference = calculateCircumference(Radius);
    Area = calculateArea(Radius);

    printf("The radius is: %.2f\n", Radius);
    printf("The circumference is: %.2f\n", Circumference);
    printf("The area is: %.2f\n", Area);

    return 0;
}

// Function to calculate circumference
double calculateCircumference(double Radius) {
    return 2 * PI * Radius;
}

// Function to calculate area
double calculateArea(double Radius) {
    return PI * Radius * Radius; // Fixed formula for area
}
