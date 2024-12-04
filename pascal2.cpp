
#include<iostream>
using namespace std;
class A{
	int a;
public:
	void setdata(){
	 cout<<"Enter the number: ";
	 cin>>a;
	}
	void showdata(){
		cout<<"The value given by you is: "<<a<<endl;
	}
	int fact(int n){
		int f=1;
		for(int i=1;i<=n;i++){
			f*=i;
		}
		 return  f;
	}
	int ncr(int b,int r)
	{
	int z=fact(r);
	int o=fact(b-r);
			int u=fact(b);
		return (u/(z*o));
	}
	void pasacal(){
		for(int i=0;i<=a;i++){
		for(int j=0;j<=i;j++){
			cout<<" "<<ncr(i,j);
		}
	cout<<endl;
	}
	}
};
int main(){
	A c1;
	c1.setdata();
	c1.showdata();
	c1.pasacal();
}