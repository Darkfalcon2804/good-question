///////Define a function to search element in array??

#include<iostream>
using namespace std;
void sort1(int arr[],int n){
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
        }
            }
        } 
        
        
    }
int  searchele(int x,int arr[],int n){
   
    int i=0;
    int e=n-1;
    int mid=i+(e-i)/2;
    while(i<=e){
        if(arr[i]==x){
            return i;
        }
        else if(arr[i]<x){
            i=mid+1;
        }
        else if(arr[i]>x){
            e=mid-1;
        }
         int mid=i+(e-i)/2;
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the element you want to find in array: ";
    cin>>x;
 sort1(arr,n);
 cout<<"The array after sorting is: ";
        for(int i=0;i<n;i++){
            cout<<"  "<<arr[i];
        }
        cout<<endl;
    int y= searchele(x,arr,n);
    if(y==-1){
        cout<<"Element not found in array";
    }
    else {cout<<"Element is found in array"<<endl;
    cout<<"It is fouund at index: "<<y<<endl;}

}