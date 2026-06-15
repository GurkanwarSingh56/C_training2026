//Q08. Simple Calculator Using Switch Case
#include <stdio.h>

int main() {
    float a, b;
    char op;

    printf("Enter expression (e.g. 5 + 3): ");
    scanf("%f %c %f", &a, &op, &b);

    switch(op) {
        case '+':
            printf("Result = %.2f", a + b);
            break;

        case '-':
            printf("Result = %.2f", a - b);
            break;

        case '*':
            printf("Result = %.2f", a * b);
            break;

        case '/':
            printf("Result = %.2f", a / b);
            break;

        default:
            printf("Invalid Operator");
    }

    return 0;
}