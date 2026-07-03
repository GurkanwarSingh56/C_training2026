#include <stdio.h>

int main() {
    int num, flag = 1;

    printf("Enter number: ");
    scanf("%d", &num);

    if(num <= 1)
        flag = 0;

    for(int i = 2; i <= num / 2; i++) {
        if(num % i == 0) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Prime Number");
    else
        printf("Not Prime Number");

    return 0;
}