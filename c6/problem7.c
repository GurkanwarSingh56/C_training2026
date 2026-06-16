#include <stdio.h>

int main() {
    int n, i = 2, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    while(i <= n) {
        sum = sum + i;
        i = i + 2;
    }

    printf("Sum of even numbers = %d", sum);

    return 0;
}