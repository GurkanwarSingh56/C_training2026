#include<stdio.h>

int main() {
    int arr[100], n, count;

    printf("Enter size: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    for(int i=0; i<n; i++) {
        count = 1;

        if(arr[i] == -1)
            continue;

        for(int j=i+1; j<n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                arr[j] = -1;
            }
        }

        printf("%d occurs %d times\n", arr[i], count);
    }

    return 0;
}