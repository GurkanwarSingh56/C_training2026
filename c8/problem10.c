#include <stdio.h>
#include <math.h>

int main() {
    int num, original, rem, digits = 0;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while(num != 0) {
        digits++;
        num /= 10;
    }

    num = original;

    while(num != 0) {
        rem = num % 10;
        sum += pow(rem, digits);
        num /= 10;
    }

    if(sum == original)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}