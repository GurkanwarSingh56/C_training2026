//Q07. Find Roots of a Quadratic Equation Using Switch Case
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, r1, r2;

    printf("Enter a, b and c: ");
    scanf("%f%f%f", &a, &b, &c);

    d = b * b - 4 * a * c;

    switch(d > 0) {
        case 1:
            r1 = (-b + sqrt(d)) / (2 * a);
            r2 = (-b - sqrt(d)) / (2 * a);
            printf("Roots are %.2f and %.2f", r1, r2);
            break;

        case 0:
            switch(d == 0) {
                case 1:
                    r1 = -b / (2 * a);
                    printf("Equal roots = %.2f", r1);
                    break;

                case 0:
                    printf("Imaginary roots");
                    break;
            }
    }

    return 0;
}