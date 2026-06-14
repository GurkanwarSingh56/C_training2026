#include<stdio.h>

int main() {
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("The number is %s", (a % 2 == 0) ? "Even" : "Odd");

    return 0;
}