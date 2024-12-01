////////Write a program using c++ for sorting strings of array in ascending or descending order on bool type argument??
#include<iostream>
#include<string.h>
using namespace std;
void sortstring(char arr[],int n,bool acsending){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(acsending==true){
                if(arr[j]>arr[j+1]){swap(arr[j],arr[j+1]);}
            }
            else if(acsending==false){
                if(arr[j]<arr[j+1]){swap(arr[j],arr[j+1]);}
            }
        }
    }
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cin.ignore();
    cout<<"Enter the string: ";
    char arr[n+1];
    cin.getline(arr,n+1);
    cout<<endl;
    cout<<"The original string is: "<<arr<<endl;
    //////sorting string in acsending order
    sortstring(arr,strlen(arr),true);
    cout<<"The string after asceding sorting we get: "<<arr<<endl;
    //////sorting string in descending order
    sortstring(arr,strlen(arr),false);
    cout<<"The string after descending sorting we get: "<<arr<<endl;
} 