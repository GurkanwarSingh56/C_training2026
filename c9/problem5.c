#include<stdio.h>

int main() {
    int arr[5];

    for(int i=0; i<5; i++)
        scanf("%d", &arr[i]);

    int largest = arr[0];
    int second = arr[0];

    for(int i=1; i<5; i++) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    printf("Second Largest = %d", second);

    return 0;
}