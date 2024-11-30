////////Write a c++ funtion to sort array in ascending order depending on bool type argument.Use default argument to implement it??

#include<iostream>
using namespace std;
void sortarray(int arr[],int n,bool ascending){
 for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
            if(ascending==true){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
            }
            else if(ascending==false){
                if(arr[j]<arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
            }
        }
    }
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int arr[n];
     cout<<"Enter the elements of array: ";
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     ////// sorting array in ascending order
    sortarray(arr,n,true);
    cout<<"Array after sorting in ascending order: ";
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
    //////Sorting array in descending order
    sortarray(arr,n,false);
    cout<<"Array after sorting in descending order: ";
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
}