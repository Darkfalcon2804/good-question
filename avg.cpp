////Define a function to find average of elements of array??

#include<iostream>
using namespace std;
int avg(int n,int sum){
    int a=0;
    a=sum/n;
    return a;
}
int add(int n,int arr[]){
   int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter the  size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x=add(n,arr);
    int y=avg(n,x);
    cout<<"The average of all elements of array is: "<<y<<endl;
}