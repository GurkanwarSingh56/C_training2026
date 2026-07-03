//Write a C program to sort even and odd elements of array separately
#include<stdio.h>
void swap(int *a,int *b){
        int temp=*a;
        *a = *b;
        *b = temp;
    }
    
int main(){
    int i,j,k=0,l=0;
    int arr[5]={5,8,3,2,1};
    int evenarr[5];
    int oddarr[5];
    for ( i = 0; i < 5; i++)
    {
        for ( j = i+1; j < 5; j++)
        {
            if (arr[i]>arr[j])
            {
                swap(&arr[i],&arr[j]);
            }
            
        }
    }
        for ( i = 0; i < 5; i++)
        {
           if (arr[i]%2==0)
           {
            evenarr[k++]=arr[i];
           }
           else{
           oddarr[l++]=arr[i];
           }
        }
        
    
    for ( i = 0; i < k; i++)
    {
        printf(" %d",evenarr[i]);
    }
     for ( i = 0; i < l; i++)
    {
        printf(" %d",oddarr[i]);
    }
    
}