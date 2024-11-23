//////Define a function to shift right every element of array??

#include<iostream>
using namespace std;

void shiftright(int arr[],int n){
    int last=arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=last;
    cout<<"After shifting the array: ";
 for(int i=0;i<n;i++){
    cout<<" "<<arr[i];
 }
 cout<<endl;
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
 cout<<endl;
shiftright(arr,n);
}