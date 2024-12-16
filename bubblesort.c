#include<stdio.h>
int main(){
     int n;
    printf("Size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The unsorted array is: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
  printf("\n");
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n-1;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            }
        }
    }
     printf("\n");
    printf("The sorted array is: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}