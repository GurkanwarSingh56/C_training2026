#include<stdio.h>
int main(){
    int arr[3][3]={1,0,0,0,1,0,1,0,1};
    int i,j,k=0,m=1;
    for ( i = 0; i < 3; i++)
    {
        for(j=0;j<3;j++){
        if(i==j&&arr[i][j]==1)
            {
               k=1;
            }
            else if(i!=j&&arr[i][j]!=0){
                m=0;
                break;
            }
         }
         
        }
        if(k==1&&m==1){
            printf("Matrix is identity");
        }
        else printf("matrix is not identity");
        return 0;
    }
    
