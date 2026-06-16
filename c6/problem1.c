//Write a C program to print all natural numbers from 1 to n. - using while loop
#include<stdio.h>
int main ()
{
    int i =0,n ;
    printf("the n numbers u want to print");
    scanf("%d",&n);
    while(i<=n){
        printf("%d\n",i);
        i++;
    }
}