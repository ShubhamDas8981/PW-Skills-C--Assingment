#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    char c;
    cin>>num1>>num2;
    cout<<"Enter the operation: "<<endl;
    cin>>c;
    switch (c)
    {
    case '+':
        cout<<num2+num1<<endl;
        break;
    case '-':
        cout<<num2-num1<<endl;
        break;
    case '*':
        cout<<num2*num1<<endl;
        break;
    case '/':
        cout<<num2/num1<<endl;
        break;
    case '%':
        cout<<num2%num1<<endl;
        break;
    default:
        cout<<"Invalid Input"<<endl;
        break;
    }
    return 0;
}