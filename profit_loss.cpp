#include<iostream>
using namespace std;
int main()
{
    int costPrice,sellingPrice;
    cout<<"Cost Price = ";
    cin>>costPrice;
    cout<<"Selling Price = ";
    cin>>sellingPrice;
    costPrice<=sellingPrice? cout<<"Profit ="<<sellingPrice-costPrice<<endl : cout<<"Loss ="<<costPrice-sellingPrice<<endl;
    return 0;
}