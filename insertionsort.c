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
  for(int i=1;i<n;i++){
    int temp=arr[i];
    int j=i-1;
    while(j>=0 && arr[j]>temp){
        arr[j+1]=arr[j];
        j--;
    }
     arr[j+1]=temp;
  }
  printf("\n");
    printf("The sorted array is: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}