//Write a C program that accepts two item’s weight (floating points' values ) and number of purchase (floating points' values) and calculate the average value of the items.
#include<stdio.h>
int main(){
    int no;
    printf("Enter no of items to purchase");
    scanf("%d",&no);
    float weight,quantity,totalWeight=0.0f,totalQuantity=0.0f;
    for (int i = 0; i < no; i++)
    {
      printf("Enter the Weight - Item%d: ", i);
        scanf("%f", &weight);

        printf("Enter the No. of Item%d: ", i);
        scanf("%f", &quantity);

        totalWeight +=weight*quantity;
        totalQuantity +=quantity;
    }
    float avearage =totalWeight/totalQuantity;
    printf("the average of weight is %f",avearage);
}