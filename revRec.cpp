#include<iostream>
#include<string>
using namespace std;

void revRecursion(string word,string &result,int i)
{
    if (i==-1) return;
    
    result+=word[i];
    revRecursion(word,result,i-1);
}
int main()
{
    string word;
    cin>>word;
    string result="";
    int i=word.length();
    revRecursion(word,result,i);
    cout<<result<<endl;
    return 0;
}