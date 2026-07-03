//C program to find area of an equilateral triangle
#include<stdio.h>
#include <math.h>
int main(){
    int side;
    printf("enter the side of equilateral triangle");
    scanf("%d",&side);
    float area=(sqrt(3) / 4) * (side * side);
    printf("the area of equilateral triangle is %lf",area);

}