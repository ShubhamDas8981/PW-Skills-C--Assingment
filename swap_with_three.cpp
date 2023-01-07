#include<iostream>
using namespace std;
int main()
{
    int x=4,y=6,z;
    cout<<"Before Swapping: "<<endl;
    cout<<"x="<<x<<endl;
    cout<<"Y="<<y<<endl;
    z=x;
    x=y;
    y=z;
    cout<<"After Swapping: "<<endl;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    return 0;
}