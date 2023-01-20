#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int &ele : arr)
    {
        cin>>ele;
    }
    //reverse traverse
    for (int i = 0; i < n; i++)
    {
        cout<<*(arr+(n-i-1))<<" ";
    }
    cout<<endl;
    return 0;
}