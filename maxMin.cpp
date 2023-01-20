#include<bits/stdc++.h>
using namespace std;

int large(int x,int y,int z,int *largest)
{
    *largest=max(x,max(y,z));
    return min(x,min(y,z));
}
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    int largest;
    int smallest=large(x,y,z,&largest);
    cout<<largest<<endl<<smallest<<endl;
    return 0;
}