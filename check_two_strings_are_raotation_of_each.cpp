#include <bits/stdc++.h>
using namespace std;

bool areRotations(string, string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        cout<<areRotations(s1,s2)<<endl;

    }
    return 0;
}

bool areRotations(string s1,string s2)
{
    if(s1.length()!=s2.length())
        return false;
    string str=s1+s1;
    //cout<<str<<endl;
    if(str.find(s2)==-1)
        return false;
    else
        return true;
}