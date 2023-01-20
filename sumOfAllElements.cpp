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
    //sum of  all elements
    int sum=0;
    for (int  i = 0; i < n; i++)
    {
        sum+=*(arr+i);
    }
    cout<<sum<<endl;
    return 0;
}