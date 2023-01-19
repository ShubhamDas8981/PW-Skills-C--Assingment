#include<iostream>
#include<string>
using namespace std;

void rAD(string word,string &result,int i)
{
    if(i==word.length())
    {
        return;
    }
    if(result.back()!=word[i])
    {
        result+=word[i];
        rAD(word,result,i+1);
    }
    else{
        rAD(word,result,i+1);
    }
}
int main()
{
    int i=0;
    string word;
    cin>>word;
    string result="";
    rAD(word,result,i);
    cout<<result<<endl;
    return 0;
}