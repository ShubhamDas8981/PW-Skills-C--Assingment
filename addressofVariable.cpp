#include<iostream>
using namespace std;

int main()
{
    int x;
    cin>>x;
    int *ptr=&x;
    cout<<"Address of x using pointer: "<<ptr<<endl;
    cout<<"Address of x using address off operator: "<<&x<<endl;
    return 0;
}