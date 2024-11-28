//////Write function in c++ to find maximam two numbers and both the function can be integer or real??
#include<iostream>
using namespace std;
class A{
public: 
int maxe(int a,int b){
    return max(a,b);
}
float maxe(float a,float b){
    return max(a,b);
}
double maxe(double a,double b){
    return max(a,b);
}
};
int main(){
    A c1;
    ////////Int
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    int b;
    cout<<"Enter the number: ";
    cin>>b;
    int y=c1.maxe(a,b);
    cout<<"The maximam of int number is: "<<y<<endl;
    ///////////Float    
    float x;
    cout<<"Enter the number: ";
    cin>>x;
    float z;
    cout<<"Enter the number: ";
    cin>>z;
    float p=c1.maxe(x,z);
    cout<<"The maximam of float number is: "<<p<<endl;
    //////////Double
    double r,f;
    cout<<"Enter two numbers: ";
    cin>>r>>f;
    double u=c1.maxe(r,f);
    cout<<"The maximum of double number is: "<<u<<endl;
    }
