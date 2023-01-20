#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        for (int  j = 0; j<n; j++)
        {
             cin>>*(*(arr+i)+j);        
        }
    }
    //sum
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        for (int  j = 0; j<n; j++)
        {
            if(i==j)
            {
                sum+=*(*(arr+i)+j);
            }    
        }
    }
    cout<<sum<<endl;
    return 0;
}