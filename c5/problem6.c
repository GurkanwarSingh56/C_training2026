//Q06. Check Whether a Number is Positive, Negative or Zero Using Switch Case
#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    switch(num > 0) {
        case 1:
            printf("Positive");
            break;

        case 0:
            switch(num < 0) {
                case 1:
                    printf("Negative");
                    break;

                case 0:
                    printf("Zero");
                    break;
            }
    }

    return 0;
}