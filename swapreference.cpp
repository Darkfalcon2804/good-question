////////Wap in c++ using oops to swap data of two int variable using call by refernce?
#include<iostream>
using namespace std;
class A{
    int a,b;
public:
void setdata(int &x ,int &y)
{
cout<<"Enter the value of a: ";
cin>>x;
cout<<"Enter the value of b: ";
cin>>y;
a=x;
b=y;
}
void showdata(){
    cout<<"The value of a= "<<a<<endl;
    cout<<"The value of b= "<<b<<endl;
}
void swapdata(int &x,int &y){
    int temp=x;
    x=y;
    y=temp;
a=x;
b=y;
}
};
int main(){
    A c1;
    int a,b;
    c1.setdata(a,b);
    cout<<"Before swapping: "<<endl;
    c1.showdata();
      
    c1.swapdata(a,b);
    cout<<"After swapping we get: "<<endl;
    c1.showdata();
}