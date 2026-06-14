//Write a C program to find the absolute value of a number using conditional operator.
#include<stdio.h>

int main() {
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("The number is %d", (a >=0) ? a :-a);

    return 0;
}