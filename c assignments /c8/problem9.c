#include <stdio.h>

int main() {
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    printf("Prime Factors: ");

    for(int i = 2; i <= num; i++) {
        while(num % i == 0) {
            printf("%d ", i);
            num /= i;
        }
    }

    return 0;
}