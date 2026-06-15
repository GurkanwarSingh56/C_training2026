//Q04. Find Maximum Between Two Numbers Using Switch Case
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    switch(a > b) {
        case 1:
            printf("Maximum = %d", a);
            break;

        case 0:
            printf("Maximum = %d", b);
            break;
    }

    return 0;
}