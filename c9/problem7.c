#include<stdio.h>

int main() {
    int arr[5];
    int count = 0;

    for(int i=0; i<5; i++)
        scanf("%d", &arr[i]);

    for(int i=0; i<5; i++) {
        if(arr[i] < 0)
            count++;
    }

    printf("Negative Elements = %d", count);

    return 0;
}