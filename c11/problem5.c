#include<stdio.h>

int main() {
    int a[3][3], scalar;

    printf("Enter matrix:\n");
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            scanf("%d",&a[i][j]);

    printf("Enter scalar value: ");
    scanf("%d",&scalar);

    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            a[i][j] *= scalar;

    printf("Result Matrix:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }

    return 0;
}