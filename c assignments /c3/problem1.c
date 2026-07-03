//Write a C program to find maximum between two numbers using conditional operator
#include<stdio.h>
int main(){
    int a,b;
    printf("enter the 2 numbers");
    scanf("%d %d",&a,&b);
    printf("The greater no is %d",a>b?a:b);
    
}