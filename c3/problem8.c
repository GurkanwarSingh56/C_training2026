//Write a C program to check whether a number is positive, negative, or zero using conditional operator.
#include<stdio.h>

int main() {
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("The number is %s", (a >0) ? "positve" : (a<0)?"negative":"zero");

    return 0;
}