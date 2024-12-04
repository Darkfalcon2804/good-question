///////////Write a function in c++ program to rotate an array by n positions in the d direction.Argument d can -1 or 1 denoting left or right direction??


#include<iostream>
using namespace std;
void reverse(int arr[],int s,int e){
    while(s<e){
    swap(arr[s],arr[e]);
    s++;
    e--;
}}
void rotate(int arr[],int s,int d,int k)
{
    if(k==0) return;   
   else if (d==1){
        reverse(arr, 0, s - 1);
        reverse(arr, 0, k - 1);
        reverse(arr, k, s - 1);
    }
    else if(d==-1){
        reverse(arr, 0, k - 1);
        reverse(arr, k, s - 1);
        reverse(arr, 0, s - 1);

    }
    else if(d!=1 || d!=-1){cout<<"Invalid direction";}
    
 }

int main(){
    int s;
    int d;
    cout<<"The size of array: ";
    cin>>s;
    cout<<"Enter the direction you want to rotate array (for left side -1 and for right side 1)= ";
    cin>>d;
    int arr[s];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<s;i++){cin>>arr[i];}
    cout<<endl;
    int k;
    cout<<"Enter the number of rows by which array should we rotate: ";
    cin>>k;
    if(k>s){k%=s;}
    rotate(arr,s,d,k);
    cout<<"The elements after rotating: ";
    for(int i=0;i<s;i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
}