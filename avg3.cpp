//////Write a c++ program in oops to calculate average of 3 numbers??

#include<iostream>
using namespace std;
class A{
    int a,b,c;
    public:
    void setdata(int a,int b,int c){
        this->a=a;
        this->b=b;
        this->c=c;
    }
    void showdata(){
        cout<<"A="<<a<<endl;
        cout<<"B="<<b<<endl;
        cout<<"C="<<c<<endl;
    }
    int avg(){
        int x=a+b+c;
        int y=x/3;
        return y;
    }
};
int main(){
    A c1;
    int p;
    cout<<"Enter the  first number: ";
    cin>>p;
    int q;
    cout<<"Enter the second number: ";
    cin>>q;
    int r;
    cout<<"Enter the third number: ";
    cin>>r;
    
    c1.setdata(p,q,r);
    c1.showdata();
    int y=c1.avg();
    cout<<"The avg of 3 numbers is: "<<y<<endl;
}