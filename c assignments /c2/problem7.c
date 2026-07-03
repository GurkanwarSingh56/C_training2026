//Write a C program to calculate the distance between the two points.
#include<stdio.h>
#include<math.h>
int main(){
    int x1,x2,y1,y2;
    printf("Enter the coordinates x1 y1");
    scanf("%d %d",&x1,&y1);
    printf("Enter the coordinates x2 y2");
    scanf("%d %d",&x2,&y2);
    float distance = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    printf("Distance between 2 points is %f", distance);
    
}