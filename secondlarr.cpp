/////Define a function to find second greatest element of array??

#include<iostream>
#include<limits.h>
using namespace std;
int secgreatest(int maxi,int arr[],int n){
    int smax=INT_MIN;
for(int i=0;i<n;i++){
        if(arr[i]>maxi){maxi=arr[i];}
    }
    for(int i=0;i<n;i++){
        if(arr[i]>smax && arr[i]!=maxi){
            smax=arr[i];
        }
    }
    return smax;
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
    int x=secgreatest(maxi,arr,n);
    cout<<"The  second greatest element of array is: "<<x<<endl;
    }