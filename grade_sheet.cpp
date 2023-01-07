#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter your marks = ";
    cin>>num;
    cout<<"Your Grades = ";
    if (num<=100 && num>90)
    {
        cout<<"A+"<<endl;
    }
    else if (num<=90 && num>80)
    {
        cout<<"A"<<endl;
    }
    else if (num<=80 && num>70)
    {
        cout<<"B+"<<endl;
    }
    return 0;
}