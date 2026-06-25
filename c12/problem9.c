#include<stdio.h>
#define m 3
#define n 3
int main(){
    
    int count=0;
    int arr[m][n]={{1,2,3},{4,0,0},{0,0,0}};
    int i,j;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
          if (arr[i][j]==0)
          {
            ++count;
          }
          
        }
        
    }

    if(count>(m*n)/2) printf("it is sparse matrix");
    else printf("it is not a sparse matrix");
    
}