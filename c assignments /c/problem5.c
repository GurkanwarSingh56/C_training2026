#include<stdio.h>
int main(){
    float km;
    printf("Input kilometers per hour:");
    scanf("%f",&km);
    float mile=0.621371*km;
    printf("%f miles per hour",mile);
}