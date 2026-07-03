/* C++ program to create a class for Employee to get and display following Employee information:

Empcode, Basicsalary
Write Member function to calculate Net salary
DA=174% of Basic salary
HRA=10% of Basic salary
TA=500
Income tax=5 % of basic salary , if baic salary > 50000
Income tax=0 , if Basic salary <= 50000
Netsalary=(basic salary + da + hra + ta) – income tax */
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
    employee e1;
    e1.getData();
    e1.calSalary();
    
}