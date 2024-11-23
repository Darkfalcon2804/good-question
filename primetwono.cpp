////Q) Wap in c++ using oops to print prime number from a and b where a and b both are taken input by user??
#include<iostream>
using namespace std;
class A{
int a,b;
public:
void setdata(){
    cout<<"Enter the  starting number: ";
    cin>>a;
    
    cout<<"Enter the number till what number you want prime number:  ";
    cin>>b;

} 
void showdata(){
    cout<<"A= "<<a<<endl;
    cout<<"B= "<<b<<endl;
}
void prime(){
    if(b<2){
        cout<<"Prime don't exist in this range";
    }
    cout<<"Prime number from "<<a<<" to "<<b<<" : "<<endl;
   
    for(int i=a;i<=b;i++){
         bool check=true;
         for(int j=2;j*j<=i;j++){
    if(i%j==0){
        check=false;
        break;
    }
      }
      if(check==true){cout<<i<<" ";}

}
cout<<endl;
}
};
int main(){
A c1;
c1.setdata();
c1.showdata();
c1.prime();
}