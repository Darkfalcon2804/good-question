////Define a function to find greatest element of array??

#include<iostream>
#include<limits.h>
using namespace std;
int greatest(int maxi,int arr[],int n){
for(int i=0;i<n;i++){
        if(arr[i]>maxi){maxi=arr[i];}
    }
    return maxi;
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
    int maxi=INT_MIN;
    int x=greatest(maxi,arr,n);
    cout<<"The greatest element of array is: "<<x<<endl;
    }