//////Define a function to swap two index and indexs should br taken from user in array??

#include<iostream>
using namespace std;
void swap1(int x,int y,int arr[],int n){
    swap(arr[x],arr[y]);
    cout<<"After swapping the array: ";
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the first index you want to swap: ";
    cin>>x;
    int y;
    cout<<"Enter the second index you want to swap: ";
    cin>>y;
     swap1(x,y,arr,n);   
}