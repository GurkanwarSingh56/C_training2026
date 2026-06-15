//Write a C program print total number of days in a month using switch case.
#include<stdio.h>
int main(){
    int month;
    printf("enter month no from 1 - 12");
    switch (month)
    {
    case 1 :
    case 3 :
    case 5 :
    case 7 :
    case 8 :
    case 10 :
    case 12 :
        printf("this month have 31 no of days");
        break;
    case 2 :
    printf("this month have 28 or 29 no of days depending on leap year");
    case 4: case 6 : case 9 : case 11 :
    printf("this month have 30 days ");  
    default:
        break;
    }
}