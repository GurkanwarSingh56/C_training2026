//Write a C program to find sum of upper triangular matrix.
#include<stdio.h>
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int i,j,sum=0;
    for ( i = 0; i < 3; i++)
    {
      for ( j = i; j < 3; j++)
      {
       sum+=arr[i][j];
      }
      
    }
    
   printf("%d",sum);
}
