//Write a C program to read an amount (integer value) and break the amount into smallest possible number of bank notes.
#include<stdio.h>
int main(){
    int hunder,fifty,twenty,ten,five,two,one;
    printf("enter number of Note(s) of 100.00");
    scanf("%d",&hunder);
    printf("enter number of Note(s) of 50.00");
    scanf("%d",&fifty);
    printf("enter number of Note(s) of 20.00");
    scanf("%d",&twenty);
    printf("enter number of Note(s) of 10.00");
    scanf("%d",&ten);
    printf("enter number of Note(s) of 5.00");
    scanf("%d",&five);
     printf("enter number of Note(s) of 2.00");
    scanf("%d",&two);
     printf("enter number of Note(s) of 1.00");
    scanf("%d",&one);
    int amount = 100*hunder+50*fifty+20*twenty+5*five+2*two+one;
    printf("%d",amount);
}
