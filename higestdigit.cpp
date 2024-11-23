//////Write a program in c++ using oops to find number of digits and highest number in digit??

#include<iostream>
using namespace std;
class A{
int a;
public:
void setdata(){
cout<<"Enter the numnber: ";
cin>>a;
}
void showdata(){
    cout<<"The given number is: "<<a<<endl;
}
void cd(){
    int count=0;
    int ld=0;
    int hd=-1;
    while(a>0){
        ld=a%10; 
        if(ld>hd){
            hd=ld;
        }
        a/=10;
        count++;
    }
    cout<<"The number of digits in given number: "<<count<<endl;
    cout<<"The highest digit in given number: "<<hd<<endl;
}

};
int main(){
A c1;
c1.setdata();
c1.showdata();
c1.cd();

}