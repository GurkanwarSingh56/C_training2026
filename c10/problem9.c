#include<stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int i,j,k;
    int arr[5]={3,2,4,5,1};

    for ( i = 4; i >= 0; i--)
    {
       for ( j = i-1; j >= 0; j--)
       {
       if (arr[i]<arr[j])
       {
        swap(&arr[i],&arr[j]);
       }
       
       }
       
    }
    

    for(k=0;k<5;k++){
        printf("%d ", arr[k]);
    }

    return 0;
}