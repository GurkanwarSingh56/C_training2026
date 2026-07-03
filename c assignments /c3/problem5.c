//Write a C program to check whether character is an alphabet or not using conditional operator.
#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        ? printf("%c is an alphabet.\n", ch)
        : printf("%c is not an alphabet.\n", ch);

    return 0;
}