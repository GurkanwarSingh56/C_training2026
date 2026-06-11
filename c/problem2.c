//2. Write a C program to read and display all type of variables.
#include<stdio.h>
int main(){
    int n;
    float f;
    char c;
    printf("enter the interger");
    scanf("%d",&n);
    printf("enter the Float value");
    scanf("%f",&f);
    printf("enter the Character");
    scanf(" %c",&c);
    printf("Integer: %d\n", n);
    printf("Float: %f\n", f);
    printf("Character: %c\n", c);
}
