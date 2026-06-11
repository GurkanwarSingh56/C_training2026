//Write a C program that accepts an employee's ID, total worked hours of a month and the amount he received per hour. Print the employee's ID and salary (with two decimal places) of a particular month.
#include<stdio.h>
int main(){
    int EmployeeId;
    int workingHrs;
    int salary;
    printf("Enter Employee id :");
    scanf("%d", &EmployeeId);
    printf("Enter Working Hours :");
    scanf("%d", &workingHrs);
    printf("Enter salary :");
    scanf("%d", &salary);
    printf("Employee id : %d \n", EmployeeId);
    printf("Salary : %d", salary);

}