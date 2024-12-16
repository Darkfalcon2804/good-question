#include<stdio.h>
int top=-1;
void push(int a[20],int n){
    int x;
    if(top==n-1){
        printf("\n stack overflow");
    }
    printf("\nEnter the data to be pushed: ");
    scanf("%d",&x);
    a[++top]=x;
}
void pop(int a[20]){
    int x;
    if(top==-1){printf("\nStack underflow");}
    x=a[top--];
}
void Display(int a[20]){
if(top==-1){printf("No element");}
printf("Element of the stack: ");
for(int i=0;i<=top;i++){
    printf("%d",a[i]);
}
}
int main(){
    int stack[20],ch,n;
     printf("Size of array: ");
    scanf("%d",&n);
   while(1){
    printf("\n1. push \n2.pop\n 3.Display\n  Enter your choice: ");
    scanf("%d",&ch);
    switch(ch){
        case 1:push(stack,n);
        break;
        case 2:pop(stack);
        break;
        case 3:Display(stack);
        break;
        default:printf("\n Wrong choice");
    }
   }
}