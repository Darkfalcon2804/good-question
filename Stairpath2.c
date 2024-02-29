//////Q)WAP to print stair path for nth stair ??////condition====single step,double step,triple step only???

#include<stdio.h>
int stair(int n){
    if(n<=2) return n;
    if(n==3) return 4;
    else return stair(n-1)+stair(n-2)+stair(n-3);
}
int main(){
 int n;
 printf("Enter a number: ");
 scanf("%d",&n);
 int x=stair(n);
 printf("The no of ways=%d\n",x);
 return 0;
}