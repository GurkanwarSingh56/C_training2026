#include<stdio.h>

int main(){
    int sec;
    printf("Enter seconds: ");
    scanf("%d", &sec);

    int hrs = sec / 3600;
    int remaining = sec % 3600;
    int min = remaining / 60;
    int second = remaining % 60;

    printf("H:M:S - %d:%d:%d\n", hrs, min, second);

    return 0;
}