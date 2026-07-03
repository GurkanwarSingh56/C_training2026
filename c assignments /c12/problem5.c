#include<stdio.h>
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int i,j,sum=0;
    for ( i = 0; i < 3; i++)
    {
      for ( j = 0; j <= i; j++)
     {
       sum+=arr[i][j];
      }
      
    }
    
   printf("%d",sum);
}
