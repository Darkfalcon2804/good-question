//////Write a program in c++ using oops find greatest number between two??

#include<iostream>
using namespace std;
class A{
int a,b;
public: 
void setdata(){
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
}
void showdata(){
    cout<<"A= "<<a<<endl;
    cout<<"B= "<<b<<endl;
}
void maxi(){
    if(a>b){
        cout<<"A is bigger then B and A= "<<a<<endl;
    }
    else if(b>a){
        cout<<"B is bigger then A and B= "<<b<<endl;
    }
}
};
int main(){
A c1;
c1.setdata();
c1.showdata();
c1.maxi();

}