#include <stdio.h>

int main() {
    int num, first, last;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;

    while(num >= 10)
        num /= 10;

    first = num;

    printf("First Digit = %d\n", first);
    printf("Last Digit = %d", last);

    return 0;
}