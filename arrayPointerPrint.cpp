#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[k];
    for(int &ele : arr)
    {
        cin>>ele;
    }
    cout<<*(arr+(k-1))<<endl;
    return 0;
}