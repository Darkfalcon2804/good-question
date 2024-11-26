//////Write a program in c++ using oops to check whether the number lies or not lies in fibonacci series??

//Hint==>to check that number lies in fibonacci series following condition should be true 1)5n^2+4 2)5n^2-4
#include<iostream>
#include<math.h>
using namespace std;
class A{
int n;
public: 
void setdata(){
cout<<"Enter the number= ";
cin>>n;
}
void showdata(){
cout<<"The number is= "<<n<<endl;
}
int fibo(int n){
    if(n==0||n==1 ){
        return 1;
    }
    else return fibo(n-1)+fibo(n-2);
}
void f(){
for(int i=0;i<n;i++){
    cout<<fibo(i)<<" ";
}
cout<<endl;
}
bool perfectsquare(int x){
    int s=sqrt(x);
    return (s*s==x);
}
bool exist(){
  if(perfectsquare(5*n*n-4)||perfectsquare(5*n*n+4)){
    return true;
  }
  else  false;
}
};
int main(){
A c1;
c1.setdata();
c1.showdata();
c1.f();
int x=c1.exist();
 if(x==true){cout<<"The number exist in the fibonacci series"<<endl;}
 else cout<<"The number don't exist in this fibonacci series"<<endl;
}