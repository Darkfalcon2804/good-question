//////Wap in c++ using oops to find the prime factors of N number ??
#include<iostream>
using namespace std;
class A {
int n;
public:
void setdata(){
    cout<<"Enter the number : ";
    cin>>n;
}
void showdata(){
    cout<<"The number given by you is: "<<n<<endl;
}
void factors(){
    cout<<"The prime factors of "<<n<<" is:";
    for(int i=2;i<=n;i++){    ///////i is starting from two becuse prime numbers start from two only. 
        if(n%i==0 && prime(i)){
             cout<<" "<<i;
        }
    }
    cout<<endl;
}
bool prime(int p){
    if(p<2) return false;
    for(int i=2;i<p;i++){
        if(p%i==0){
            return false;
        }
    }
    return true;
}
};
int main(){
A c1;
c1.setdata();
c1.showdata();
c1.factors();
}