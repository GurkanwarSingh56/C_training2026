/*Write a C++ program to create a class for student to get and print details of a student. Following are the details
of a student:
Studid, name ,sem, branch*/
#include<iostream>
using namespace std;
class student
{
private:
    int rollNo;
    string name;
    int sem;
    string branch;
public:
   void setData(int r,string n,int s,string c){
    rollNo=r;
    name=n;
    sem=s;
    branch=c;
   }
   void showData(){
    cout<<rollNo<<" "<<name<<" "<<sem<<" "<<branch;
   }
};
int main(){
student s1;
student s2;
s1.setData(502,"Gurkanwar",7,"CSE");
s1.showData();
}