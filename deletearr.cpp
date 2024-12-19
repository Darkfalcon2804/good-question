#include<iostream>
using namespace std;
void deleteA(int arr[],int n,int pos){
    if(pos>n || pos<0){
        cout<<"Invalid position"<<endl;
     return;
    }
    for(int i=pos;i<n-1;i++){
            arr[i]=arr[i+1];
    }
    n--;
     cout<<"After the deletion: ";
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
    cout<<"Without deleteing element in array: ";
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
    int pos;
    cout<<"Enter the position were you want to delete in array: ";
    cin>>pos;
    deleteA(arr,n,pos);
}