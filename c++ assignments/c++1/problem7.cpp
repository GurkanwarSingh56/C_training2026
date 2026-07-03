/*Write a C++ program to create a class for student to get and print details of a student. Following are the details
of a student:
Student_id, Name, Branch,Sub1_mark,Sub2_mark,Sub3_mark,Sub4_mark,Sub5_mark
Write member function to calculate Percentage, Class (Dist,First,Second,Pass ) of student*/
#include<iostream>
#include<string>
using namespace std;
class student
{
    private:
    int studentId;
    string name;
    char branch;
    float sub1Marks;
    float sub2Marks;
    float sub3Marks;
    float sub4Marks;
    float sub5Marks;
    float percentage;  
    string grade;// non-static data = instance data member
    static string clgName;//static data = class data member
public:
    void getData(){
        cout<<"enter studentId of the student ";
        cin>>studentId;
        cin.ignore(1000, '\n'); 
        cout<<"enter name of the student ";
        getline(cin, name);
        cout<<"enter branch of the student ";
        cin>>branch ;
        cout<<"Enter the marks of 5 subjects out of 100 ";
        cin>>sub1Marks>>sub2Marks>>sub3Marks>>sub4Marks>>sub5Marks;
    }
    void calPercentage(){
        percentage=(sub1Marks+sub2Marks+sub3Marks+sub4Marks+sub5Marks)/5;
    }
    void calgrade(){
     if (percentage>80)
     {
       grade="first";
     }
      else if (percentage<=80&&percentage>60)
     {
       grade="second";
     }
     else if (percentage<=60&&percentage>45)
     {
       grade="third";
     }
     else if (percentage<=45&&percentage>40)
     {
       grade="pass";
     }
     else {
        grade="fail";
     }
    }
    void showData(){
        cout<<"College Name :"<<clgName<<endl;
        cout<<"studentId of the student: "<<studentId<<endl;
        cout<<"name of the student: "<<name<<endl;
        cout<<"branch of the student: "<<branch<<endl;
        cout<<"Percentage of the student: "<<percentage<<endl;
        cout<<"grade of the student: "<<grade<<endl;
        
    }
};
string student::clgName="RBPU";
int main(){
student s1;
s1.getData();
s1.calPercentage();
s1.calgrade();
s1.showData();

}