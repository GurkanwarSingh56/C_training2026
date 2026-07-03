//Write a C program to check whether year is leap year or not using conditional operator.
#include<stdio.h>

int main() {
    int a;

    printf("Enter a number of days in year ");
    scanf("%d", &a);

    printf("This is %s year", (a == 365) ? "Not Leap" : "leap");

    return 0;
}