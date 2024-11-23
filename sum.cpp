//////Define a function to find sum of all elements in array???

#include<iostream>
using namespace std;
void add(int n,int arr[]){
   int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<"The sum of all elements of array is: "<<sum<<endl;
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
    add(n,arr);
}