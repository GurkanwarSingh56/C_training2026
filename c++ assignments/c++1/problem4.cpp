//WAP to find area of circle. Area of Circle = PI * r * r Where, PI = 3.14 (Using Class and Object)
#include<iostream>
using namespace std;
class AreaOfCircle
{
private:
    float radius,area;
    static float pi;
public:
   
    void setData(float r){
   radius=r;
   }
   void cal(){
    area=pi*radius*radius;
   }
   void showData(){
   cout<<"Area of the circle is : "<<area<<endl;
   }
};
float AreaOfCircle::pi=3.14;
int main(){
    AreaOfCircle a1;
    a1.setData(4);
    a1.cal();
    a1.showData();
    return 0;
}