//////Define a overloaded functions to calculate volume of cuboid cone and sphere??
#include<iostream>
#include<conio.h>
using namespace std;
class volume{
public:
     void vol(int r,const double pie,const double  val){
      cout<<"Volume of sphere is: "<<r*r*r*pie*val<<endl;
     }
     void vol(int a){
        cout<<"Volume of cuboid is: "<<a*a*a<<endl;
     }
     void vol(int rr,const double pie,int h){
        const double val1=1.0/3;
        cout<<"Volume of cone is: "<<pie*val1*rr*rr*h<<endl;
     }
};

int main(){
    volume A;
    const double pie=3.14;
    const double val=4.0/3;
    
   int r;
   cout<<"Enter the raidus of sphere: ";
    cin>>r;
   A.vol(r,pie,val);
    cout<<"--------------------------------------------------"<<endl;
    int a;
    cout<<"Enter the side of cube:  ";
    cin>>a;
    A.vol(a);
    cout<<"--------------------------------------------------"<<endl;
    int rr;
    cout<<"Enter the radius of cone: ";
    cin>>rr;
    int h;
    cout<<"Enter height of cone: ";
    cin>>h;
    A.vol(rr,pie,h);
    getch();
}