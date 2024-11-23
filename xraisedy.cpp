//////Write a program in c++ using oops to calculate x raised to the power y???
#include<iostream>
#include<math.h>
using namespace std;
class A{
int x;int y;
public: 
void setdata(){
cout<<"Enter the X= ";
cin>>x;
cout<<"Enter the Y= ";
cin>>y;
}
void showdata(){
cout<<"X= "<<x<<endl;
cout<<"Y= "<<y<<endl;
}
int raised(){
    ////method 1
return pow(x,y);
//////method 2
int result=1;
for(int i=1;i<=y)
}
};
int main(){
A c1;
c1.setdata();
c1.showdata();
int z=c1.raised();
cout<<"When X is raised to power Y we get: "<<z<<endl;
}