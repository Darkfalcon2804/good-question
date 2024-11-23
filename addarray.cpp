//////Write a c++ program using oops to add all nnumbers of an array of size 10??

#include<iostream>
using namespace std;
class A{
int arr[10],sum;
public:
void setdata(){
    cout<<"Enter 10 numbers: "<<endl;
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
}
void displaysum(){
    sum=0;
    for(int i=0;i<10;i++){
        sum+=arr[i];
    }
    cout<<"The sum of all numbers in the array is: "<<sum<<endl;
}
};
int main(){
A c1;
c1.setdata();
c1.displaysum();
}