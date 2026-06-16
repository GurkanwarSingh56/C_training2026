//Write a C program to print all natural numbers in reverse (from n to 1). - using while loop
#include<stdio.h>
int main ()
{
    int n;
    printf("the n numbers u want to print");
    scanf("%d",&n);
    while(n>=1){
        printf("%d\n",n);
        n--;
    }
}