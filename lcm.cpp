//////Wap in c++ to calculate lcm of three numbers??

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
    cout<<"The value of A: "<<a<<endl;
    cout<<"The value of B: "<<b<<endl;
    }
    int lcm(){
        int lm;
        if(a>b){lm=a;}
        else lm=b;
        while(true){
            if(lm % a==0 && lm%b==0){
                return lm;
            }
            lm++;
        }
    }
    void printlcm(){
        cout<<"The LCM of "<<a<<" and "<<b<<" is "<<lcm()<<endl;
    }
};
int main(){
A c1;
c1.setdata();
c1.showdata();
c1.printlcm();
}