//////Define overloaded functions to calculate area of circle,area of rectangle and area of triangle???  
    
    #include<iostream>
    #include<conio.h>
    using namespace std;
    const float pie=3.14;
    const float half=0.5;
    class A{
    public:
    int area(int r){
        return pie*r*r;
    }
    int area(int l,int b){
        return l*b;
    }
    float area(float x,float h){
        return half*x*h;
    }
    };

    int main(){
    ////Area of circle
    A c1;
    cout<<endl;
    int r;
    cout<<"Enter radius of circle: ";
        cin>>r;
    int c=c1.area(r);
    cout<<"The area of circle is: "<<c<<endl;
    //////Area of rectangle
    int l,b;
    cout<<"Enter the length of rectangle: ";
    cin>>l;
        cout<<"Enter the breadth of rectangle: ";
    cin>>b;
        int p=c1.area(l,b);
    cout<<"The area of rectangle is: "<<p<<endl;
    //////Area of triangle
    float x;
    float h;
    cout<<"Enter the base of triangle: ";
    cin>>x;
    cout<<"Enter the height of triangle: ";
    cin>>h;
    int q=c1.area(x,h);
    cout<<"The area of triangle is: "<<q<<endl;
    getch();
    }