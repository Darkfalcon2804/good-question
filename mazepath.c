/////Q)Maze path condition down or right only and 1step or 1 block of grid at a time??

#include<stdio.h>
int maze(int cr,int cc,int er,int ec){                   /////current row =cr ;; current column=cc;;endind row=er;;ending column=ec;;
int rightways=0;
int downways=0;
if (cr==er && cc==ec) return 1;
if(cr==er){
    rightways+=maze(cr,cc+1,er,ec);
} if (cc==ec)
{
downways +=maze(cr+1,cc,er,ec);
}
if (cc<ec &&cr<er)
{rightways+=maze(cr,cc+1,er,ec);
downways +=maze(cr+1,cc,er,ec);
}
return rightways+downways;
}
int main(){
    int n;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    int m;
    printf("Enter number of columns : ");
    scanf("%d",&m);
    int x= maze(1,1,n,m);
    printf("Total no ways to reach final position with condition=%d\n",x);
    return 0;
}