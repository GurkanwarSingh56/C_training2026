#include<stdio.h>
int main(){
    int arr[3][3] = {
        {1, 2, 3},
        {2, 4, 5},
        {3, 5, 6}
    };
    
    int i,j,count = 1;
    
    for ( i = 0; i < 9; i++)
    {
       for ( j = 0; j < 9; j++)
       {
        if (arr[i][j]!=arr[j][i])
        {
            count =0;
            break;
        } 
    }   
    }
    if (count)
    {
       printf("matrix is Symmetric matrix");
    }
    else{
        printf("matrix is ASymmetric matrix");
    }
    
}