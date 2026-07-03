//Write a C program to enter a four digit number and print all digit.
#include <stdio.h>

int main() {
    int num;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);
    int thousands = num / 1000;
    int hundreds  = (num / 100) % 10;
    int tens      = (num / 10) % 10;
    int ones      = num % 10;
    printf("Digits: %d, %d, %d, %d\n", thousands, hundreds, tens, ones);

    return 0;
}
