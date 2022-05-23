#include<iostream>
using namespace std;
class Box
{
    public:
    double l,b,h,vol;
    void setdata()
    {
        cout<<"Enter length: "<<endl;
        cin>>l;
        cout<<"Enter breadth: "<<endl;
        cin>>b;
        cout<<"Enter height: "<<endl;
        cin>>h;
    }
    void displayVolume()
    {
        cout<<l*b*h;
    }
    Box operator + (Box &obj)
    {
        Box A;
        A.l=l+obj.l;
        A.b=b+obj.b;
        A.h=h+obj.h;
        return A;
    }
};
int main()
{
Box B1,B2,B3;
double volume=0;
B1.setdata();
B2.setdata();
cout<<"Volume of box 1 is: " << endl;
B1.displayVolume();
cout<<endl;
cout<<"Volume of box 2 is: " << endl;
B2.displayVolume();
cout<<endl;
B3=B1+B2;
cout<<"Volume of box 3 is: " << endl;
B3.displayVolume();

return 0;
}