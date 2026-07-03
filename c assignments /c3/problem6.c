//Write a C program to swap two numbers using bitwise operator.
#include<stdio.h>
int main(){
    int a=10,b=20;
    a =a^b;
    b=a^b;
    a=a^b;
    printf("%d %d",a,b);

}