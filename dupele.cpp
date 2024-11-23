////Define a function to delete duplicate element of an array??

#include<iostream>
using namespace std;
void sort1(int arr[],int n){
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
        }
            }
        }}
void dupele(int arr[],int n){    
    int k=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
            arr[k++]=arr[i];
        }
    }
    arr[k++]=arr[n-1];
    cout<<"After deleting duplicate element of array: ";
    for(int i=0;i<k;i++){
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
    sort1(arr,n);
    dupele(arr,n);

}