/////Define a function to find smallest element of array??

#include<iostream>
#include<limits.h>
using namespace std;
int smallest(int mini,int arr[],int n){
for(int i=0;i<n;i++){
        if(arr[i]<mini){mini=arr[i];}
    }
    return mini;
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
    int mini=INT_MAX;
    int x=smallest(mini,arr,n);
    cout<<"The smallest element of array is: "<<x<<endl;
    }