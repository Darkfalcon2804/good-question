////Write a c++ program in oops to calculate square of a number??
#include<iostream>
using namespace std;
class A{
int a;
public: 
void showdata(int a){
    this->a=a;
    cout<<"The square of this number is: "<<a*a<<endl;
}
};
int main(){
A c1;
int n;
cout<<"Enter the number you want to know square: ";
cin>>n;
c1.showdata(n);
}