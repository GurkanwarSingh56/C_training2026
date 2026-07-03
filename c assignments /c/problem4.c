// Write a C program that calculates the volume of a sphere. (Formula : V = 4/3*π*r*r*r)
#include <stdio.h>
int main()
{
    float radius;
    printf("Input the radius of the sphere : ");
    scanf("%f", &radius);
    double vol = (4.0 / 3.0) * (22.0 / 7.0) * radius * radius * radius;
    printf("The volume of sphere is %f", vol);
}