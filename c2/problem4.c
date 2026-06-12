//4. Write a C program to print the following characters in a reverse way.
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "XML";
    int len = strlen(str);

    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}