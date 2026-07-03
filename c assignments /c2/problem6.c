//Write a C program to calculate a bike’s average consumption from the given total distance (integer value) traveled (in km) and spent fuel (in liters, float number – 2 decimal point).
#include<stdio.h>
int main(){
    int km;
    float l=0.0f;
    printf("Enter no of km traveled and litter of fuel spent");
    scanf("%d %f",&km ,&l);
    float average = km/l;
    printf("Average of car is %.2f",average);
}