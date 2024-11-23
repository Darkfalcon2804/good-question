////Q) Wap in c++ using oops to print prime number from 1ton??

#include<iostream>
using namespace std;
class A{
int a;
public:
void setdata(){
    cout<<"Enter the number: ";
    cin>>a;

} 
void showdata(){
    cout<<"A= "<<a<<endl;

}
void prime(){
    if(a<2){
        cout<<"Prime don't exist in this range";
    }
    cout<<"Prime number from 1 to "<<a<<" : "<<endl;
   
    for(int i=2;i<a;i++){
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