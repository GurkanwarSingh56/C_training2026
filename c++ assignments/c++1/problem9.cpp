// Do above program for 5 number of Employees.( Using Array of Object )
#include <iostream>
using namespace std;
class employee{
    int empCode,basicSalary;
    float da,hra,tax=0,ta=500;
public:
    void getData(){
        cout<<"enter Employee code and his basic salary";
        cin>>empCode>>basicSalary;
    }
    void calDa(){
        da=1.74*basicSalary;
       
    }
    void calHra(){
        hra=0.1*basicSalary;
        
    }
    void calTax(){
        if (basicSalary>50000)
        {
           tax=0.05*basicSalary;
        }
    }
    void calSalary(){
        calDa();
        calHra();
        calTax();
        float Salary=(basicSalary+da+hra+ta)-tax;      
        cout<<"Net of employee with employee code "<<empCode<<" is "<<Salary<<endl;
    }
};
int main(){
    const int count = 5;
    employee employees[count]; 
    for (int i = 0; i < count; i++)
    {
        employees[i].getData();
        employees[i].calSalary();
    }
}