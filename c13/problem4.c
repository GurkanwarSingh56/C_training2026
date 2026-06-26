//Program to compare strings using strcmp() function.
#include <stdio.h>
#include <string.h>

int main() {
    char st1[] = "Gurkanwar";
    char st2[] = "singh";    
    
    int a = strcmp(st2, st1);
    
    if (a != 0) {
        printf("strings are not same\n");
    } else {
        printf("strings are same\n");
    }
    
    return 0;
}