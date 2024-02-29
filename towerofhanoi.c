////Q)Tower of HANOI ????
#include<stdio.h>
#include<math.h>
int p(int a,int n){
    return pow(a,n)-1;
}
void tower(int n,char s,char h, char d){
    if(n==0) return;
  tower(n-1,s,d,h);
  printf("%c-->%c\n",s,d);
  tower(n-1,h,s,d);
  return ;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int x=p(2,n);
    printf("The minimum moves will be:%d\n",x);
         tower(n,'A','B','C');
    return 0;
}