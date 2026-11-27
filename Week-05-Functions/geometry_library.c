
#include <stdio.h>

#define PI 3.14159

// Function to calculate the area of a circle
double areaOfCircle(double radius) {
    if (radius < 0) {
        printf("Error: Radius cannot be negative.\n");
        return 0;
    }

    return PI * radius * radius;
}

// Function to calculate the area of a rectangle
double areaOfRectangle(double length, double width) {
    if (length < 0 || width < 0) {
        printf("Error: Dimensions cannot be negative.\n");
        return 0;
    }

    return length * width;
}

// Function to calculate the area of a triangle
double areaOfTriangle(double base, double height) {
    if (base < 0 || height < 0) {
        printf("Error: Dimensions cannot be negative.\n");
        return 0;
    }

    return 0.5 * base * height;
}

// Function to display the menu
void displayMenu() {
    printf("\n===== GEOMETRY CALCULATOR =====\n");
    printf("1. Calculate Circle Area\n");
    printf("2. Calculate Rectangle Area\n");
    printf("3. Calculate Triangle Area\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
}

int main() {
    int choice;
    double radius, length, width, base, height;

    do {
        displayMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter radius: ");
                scanf("%lf", &radius);
                printf("Circle Area = %.2f\n", areaOfCircle(radius));
                break;

            case 2:
                printf("Enter length: ");
                scanf("%lf", &length);

                printf("Enter width: ");
                scanf("%lf", &width);

                printf("Rectangle Area = %.2f\n",
                       areaOfRectangle(length, width));
                break;

            case 3:
                printf("Enter base: ");
                scanf("%lf", &base);

                printf("Enter height: ");
                scanf("%lf", &height);

                printf("Triangle Area = %.2f\n",
                       areaOfTriangle(base, height));
                break;

            case 4:
                printf("Thank you for using the Geometry Calculator!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}
