#include<iostream>
using namespace std;
    void insert(int arr[],int pos ,int data,int n){
        if(pos<0 || pos >n){
            cout<<"Invalid position "<<endl;
            return;
        }
        for(int i=n;i>pos;i--){
            arr[i]=arr[i-1];
        }
        arr[pos]=data;
        n++;
        cout<<"After the insertion: ";
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
    cout<<"Without inserting element in array: ";
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
    int pos;
    cout<<"Enter the position were you want to insert in array: ";
    cin>>pos;
    int data;
    cout<<"Enter the data you want to insert: ";
    cin>>data;
    insert(arr,pos,data,n);
}