////Q) stair path n th stair???  /////condition== single step and double step only

#include<stdio.h>
int stair(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    return stair(n-1)+stair(n-2);
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int x=stair(n);
    printf("%d\n",x);
    return 0;}