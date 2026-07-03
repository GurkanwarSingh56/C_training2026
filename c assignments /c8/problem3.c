#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits = 0, temp;

    printf("Enter number: ");
    scanf("%d", &num);

    temp = num;
    last = num % 10;

    while(temp >= 10) {
        temp /= 10;
        digits++;
    }

    first = temp;

    int middle = (num % (int)pow(10, digits)) / 10;

    int swapped = last * pow(10, digits) +
                  middle * 10 +
                  first;

    printf("After Swapping = %d", swapped);

    return 0;
}