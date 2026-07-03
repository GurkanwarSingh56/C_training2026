#include <stdio.h>
#include <ctype.h>  

int main() {
    char str[] = "Gurkanwar";
    
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper((unsigned char)str[i]);
    }
    
    printf("Uppercase String: %s\n", str);
    return 0;
}
