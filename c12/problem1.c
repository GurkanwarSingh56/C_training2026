#include<stdio.h>
void swap(int *a,int *b){
    int temp =*a;
    *a=*b;
    *b=temp;
}
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int i,j;
    for ( i = 0; i < 3; i++)
    {
        swap(&arr[i][i],&arr[i][2-i]);
    }
    for ( i = 0; i < 3; i++){
    for ( j = 0; j < 3; j++)
    {
       printf("%d ",arr[i][j]);
    }
   printf("\n");
}
}