//////Write a program in c++ using oops by using function overloading to add two numbers having different datatypes??

#include<iostream>
using namespace std;
class A{
   public:
 int add(int x, int y){
    return x+y;
  }
  float add(float c,float h){
    return c+h;
  }
};
int main(){
    A c1;
     int x,y;
    cout<<"Enter the number= ";
cin>>x;
cout<<"Enter the number= ";
cin>>y;
   int z= c1.add(x,y);
   cout<<"The sum is: "<<z<<endl;
   float c,h;
   cout<<"Enter the number: ";
   cin>>c;
   cout<<"Enter the number: ";
   cin>>h;
   double j=c1.add(c,h);
   cout<<"The sum of float variables are: "<<j<<endl;
   
}