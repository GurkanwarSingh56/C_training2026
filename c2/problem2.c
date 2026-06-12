#include <stdio.h>

int main() {
    int a, b, c, d, e, max;
    printf("Enter maximum total marks of 5 subjects: ");
    scanf("%d", &max);
    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int total = a + b + c + d + e;
    float average = total / 5.0f;
    float per = (total * 100.0f) / max;
    printf("Total marks = %d\n", total);
    printf("Average marks = %.2f\n", average);
    printf("Percentage = %.2f%%\n", per);

    return 0;
}