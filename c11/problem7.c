#include<stdio.h>

int main() {
    int a[3][3], b[3][3];
    int c=1;

    printf("Enter first matrix:\n");
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            scanf("%d",&a[i][j]);

    printf("Enter second matrix:\n");
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            scanf("%d",&b[i][j]);

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(a[i][j]!=b[i][j]){
                c=0;
                break;
            }
        }
    }

    if(c)
        printf("Matrices are Equal");
    else
        printf("Matrices are Not Equal");

    return 0;
}