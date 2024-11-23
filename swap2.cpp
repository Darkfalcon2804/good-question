//////Write a program in c++ using oops to swap two variables ??

#include<iostream>
using namespace std;
class A{
int a,b;
public: 
void setdata(){
     cout<<"Enter the first number:  ";
     cin>>a;
     cout<<"Enter the second number:  ";
     cin>>b;
}
void showdata(){
    cout<<"Before swapping: "<<endl;
    cout<<"A= "<<a<<endl;
    cout<<"B= "<<b<<endl;
}
void swapdata(){
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swapping:  "<<endl;
    cout<<"A= "<<a<<endl;
    cout<<"B= "<<b<<endl;
}
};
int main(){
A c1;
c1.setdata();
c1.showdata();
c1.swapdata();
}