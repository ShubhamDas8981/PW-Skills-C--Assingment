#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    if (num==abs(num))
    {
        cout<<"The number is positive = "<<num<<endl;
    }
    else
    {
        cout<<"The number is negative and it skipped."<<endl;
    }
    return 0;
}