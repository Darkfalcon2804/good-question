// /////////Write a program in c++ to print pascal traingle up to N lines??
////////////////////////////Method 1 without using oops
// #include<iostream>
// using namespace std;
// int fact(int n){
//     int f=1;
//     for(int i=1;i<=n;i++){
//         f*=i;
//     }
//     return f;
// }
// int ncr(int n,int r){
//     return fact(n)/(fact(r)*fact(n-r));
// }
// int main(){
//     int n ;
//    cout<<"Enter the number of lines: ";
//    cin>>n;
//   for(int i=0;i<=n;i++){
//     for(int k=0;k<=n-i;k++) cout<<" ";
//     for(int j=0;j<=i;j++)
//     {cout<<" "<<ncr(i,j);}
//       cout<<endl;
//   }
//   cout<<endl;
// }

#include<iostream>
using namespace std;
class A{
int n;
public: 
void setdata(){
      cout<<"Enter the number of lines: ";
   cin>>n;
}
void showdata(){
    cout<<"N="<<n<<endl;
}
int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
    }
    return f;
}
 int ncr(int n,int r){
    return fact(n)/(fact(r)*fact(n-r));
}
void pascal(){
    for(int i=0;i<=n;i++){
    for(int k=0;k<=n-i;k++) cout<<" ";
    for(int j=0;j<=i;j++)
    {cout<<" "<<ncr(i,j);}
      cout<<endl;
  }
  cout<<endl;
  
}
};
int main(){
    A c1;
    c1.setdata();
    c1.showdata();
    c1.pascal();
}