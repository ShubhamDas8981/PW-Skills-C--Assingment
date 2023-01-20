#include<bits/stdc++.h>
using namespace std;

void swapped(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<x<<" "<<y<<endl;
    swapped(&x,&y);
    cout<<x<<" "<<y<<endl;
}