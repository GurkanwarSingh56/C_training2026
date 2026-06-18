#include <stdio.h>

int main() {
    long long num;
    int freq[10] = {0};

    printf("Enter a number: ");
    scanf("%lld", &num);

    while(num != 0) {
        freq[num % 10]++;
        num /= 10;
    }

    for(int i = 0; i < 10; i++) {
        printf("Digit %d = %d times\n", i, freq[i]);
    }

    return 0;
}