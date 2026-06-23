//Q1. Write a C program to left rotate an array.
#include<stdio.h>
int main(){
    int i;
    int arr[6]={2,2,3,4,5};
    arr[5]=arr[0];
    for ( i = 0; i < 5; i++)
    {
       arr[i]=arr[i+1];
    }
    for ( i = 0; i < 5; i++)
    {
       printf("%d",arr[i]);
    }
    
}