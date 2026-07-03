#include<stdio.h>

int main() {
    int a[3][3];
    int rowSum, colSum;

    printf("Enter matrix:\n");
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            scanf("%d",&a[i][j]);

    printf("Row Sums:\n");
    for(int i=0;i<3;i++) {
        rowSum = 0;

        for(int j=0;j<3;j++)
            rowSum += a[i][j];

        printf("Row %d = %d\n", i+1, rowSum);
    }

    printf("Column Sums:\n");
    for(int j=0;j<3;j++) {
        colSum = 0;

        for(int i=0;i<3;i++)
            colSum += a[i][j];

        printf("Column %d = %d\n", j+1, colSum);
    }

    return 0;
}