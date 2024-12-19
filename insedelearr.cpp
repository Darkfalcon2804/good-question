////Q)WAP to delete and insert in the array in same program?
#include<iostream>
using namespace std;
void insert(int arr[],int pos,int data,int n);
void deleteA(int arr[],int pos,int data,int n){
pos--;
for(int i=pos;i<n-1;i++){
    arr[i]=arr[i+1];
}
n--;
cout<<"---------------------------------"<<endl;
cout<<"After deleting in array: ";
for(int i=0;i<n;i++){
    cout<<" "<<arr[i];
}
cout<<endl;
insert(arr,pos,data,n);
}
void insert(int arr[],int pos,int data,int n){
    for(int i=n;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=data;
    n++;
    cout<<"---------------------------------"<<endl;
    cout<<"Array after insertion: ";
    for(int i=0;i<n;i++){
    cout<<" "<<arr[i];
}
cout<<endl;
cout<<"---------------------------------"<<endl;
cout<<endl;
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"---------------------------------"<<endl;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int pos;
    cout<<"---------------------------------"<<endl;
    cout<<"Enter the position: ";
    cin>>pos;
    int data;
    cout<<"---------------------------------"<<endl;
    cout<<"Enter the data you want to insert: ";
    cin>>data;
    deleteA(arr,pos,data,n);
}
