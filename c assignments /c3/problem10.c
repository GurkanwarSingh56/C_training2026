//Write a C program to demonstrate the use of logical operators by checking whether a given number lies within a specified range (e.g., between 10 and 20).
//Write a C program to find the absolute value of a number using conditional operator.
#include<stdio.h>

int main() {
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("The number %s between 10 and 20", (a >10&&a<20) ? "lies" :"does not lie");

    return 0;
}