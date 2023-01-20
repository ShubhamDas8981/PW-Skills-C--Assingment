#include<iostream>
using namespace std;

int main()
{
    int x,y,result;
    cin>>x>>y;
    int *ptr_x=&x;
    int *ptr_y=&y;
    int *ptr_result=&result;
    *ptr_result=(*ptr_x)*(*ptr_y);
    cout<<"Product: "<<*ptr_result<<endl;
    return 0;
}