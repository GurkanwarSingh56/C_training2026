//WAP to print your name, age and city and pin code on screen (Using Class).
#include<iostream>
using namespace std;
class student
{
private:
    string name;
    int age;
    string city;
public:
   void setData(int r,string n,string s){
    age=r;
    name=n;
    city=s;
   }
   void showData(){
    cout<<name<<" "<<age<<" "<<city;
   }
};
int main(){
student s1;
student s2;
s1.setData(21,"Gurkanwar","garhshankar");
s1.showData();
}