//Write a C program to find maximum between three numbers using conditional operator.
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the 3 numbers");
    scanf("%d %d %d",&a,&b,&c);
    printf("The greater no is %d",a>b&&a>c?a:b>c?b:c);
    
}