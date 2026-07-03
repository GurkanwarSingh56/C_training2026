// right rotate 

#include<stdio.h>
int main(){
    int i;
    int arr[6]={2,2,3,4,5};
    int temp =arr[4];
    for ( i = 4; i >0; i--)
    {
       arr[i]=arr[i-1];
    }
    arr[0]=temp;
    for ( i = 0; i < 5; i++)
    {
       printf("%d",arr[i]);
    }
    
}