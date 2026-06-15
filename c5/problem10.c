//Q10. Write a C program to display a menu for arithmetic operations and perform the selected operation using switch case
#include <stdio.h>

int main() {
    int choice;
    float a, b;

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f%f", &a, &b);

    switch(choice) {
        case 1:
            printf("Sum = %.2f", a + b);
            break;

        case 2:
            printf("Difference = %.2f", a - b);
            break;

        case 3:
            printf("Product = %.2f", a * b);
            break;

        case 4:
            printf("Quotient = %.2f", a / b);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}