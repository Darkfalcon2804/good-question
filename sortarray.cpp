  //////Define a function to sort elements of array??
    #include<iostream>
    using namespace std;
    void sort1(int arr[],int n){
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
        }
            }
            cout<<arr[i]<<endl;
        } 
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
        sort1(arr,n);
    }
