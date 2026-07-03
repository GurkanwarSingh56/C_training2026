#include<stdio.h>

int main() {
    int arr[5];

    printf("Enter 5 elements:\n");
    for(int i=0; i<5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Negative elements are:\n");
    for(int i=0; i<5; i++) {
        if(arr[i] < 0)
            printf("%d ", arr[i]);
    }

    return 0;
}