#include <stdio.h>

int main() {
    int n, flag;
    long long sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for(int i = 2; i <= n; i++) {
        flag = 1;

        for(int j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                flag = 0;
                break;
            }
        }

        if(flag)
            sum += i;
    }

    printf("Sum = %lld", sum);

    return 0;
}