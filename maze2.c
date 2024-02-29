//////Q)Maze path condition two paramters use kar na hai extra nhii deal in n and m pls copy mai grid bana le na with opp numbering in this final position will be 1,1???


#include<stdio.h>
int maze(int n,int m){
    int rightways=0;
    int downways=0;
    if(n==1&&m==1) return 1;
    if(n==1){//////cannot go down
        rightways+=maze(n,m-1);
    }
    if(m==1) {//////cannot go right
        downways+=maze(n-1,m);
    }
    if(n>1&&m>1){
        rightways+=maze(n,m-1);
        downways+=maze(n-1,m);}
        return rightways+downways;}
int main(){
    int n;
    printf("Enter no of rows: ");
    scanf("%d",&n);
    int m;
    printf("Enter no of column: ");
    scanf("%d",&m);
    int x= maze(n,m);
    printf("The total no of ways to reach final position=%d\n ",x);
    return 0;
}