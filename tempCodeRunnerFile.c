#include <stdio.h>
#include <math.h>

//Ensure PI is defined
#define PI
#ifndef PI 3.14159265359
#endif

//Function prototype for circumference
double calculateCircumference(double Radius);

//Function prototype for circumference
double calculateArea(double Radius);

int main(){
    double Radius, Circumference, Area;

    printf("Enter the radius: ");
    scanf("%d", &Radius);

    //calculate and print the circumference
    Circumference = calculateCircumference(Radius);
    Area = calculateArea(Radius);

    printf("The radius is: %.2f \n", Radius);
    printf("The circumference is: %.2f \n", Circumference);
    printf("The area is: %.2f", Area); 

    return 0;
}

//Function prototype for circumference
double calculateCircumference(double Radius){
    return 2 * PI * Radius;
}

//Function prototype for circumference
double calculateArea(double Radius){
    return 2 * PI * Radius * Radius;
}