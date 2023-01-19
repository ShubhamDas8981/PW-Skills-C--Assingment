#include<iostream>
using namespace std;
void targVal(int *array,int r,int tar,int count)
{
    if (count==r)
    {
        return;
    }
    if (tar==array[count])
    {
        cout<<count<<" ";
       /* targVal(array,r,tar,count+1);*/
    }
    targVal(array,r,tar,count+1);
}
int main()
{
    int count=0;
    int r;
    cin>>r;
    int array[r];
    for ( int  i = 0; i < r; i++)
    {
        cin>>array[i];
    }
    int tar;
    cin>>tar;
    targVal(array,r,tar,count);
    return 0;
}