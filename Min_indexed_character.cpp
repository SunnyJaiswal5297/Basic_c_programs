#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str,patt;
        cin>>str;
        cin>>patt;
        unordered_map<char,int> m;
        for(int i=0;i<str.length();i++)
        {
            if(m.find(str[i])==m.end())
                m[str[i]]=i;
        }
        int f=0,min=INT_MAX;
        char res='$';
        for(int i=0;i<patt.length();i++)
        {
            if(m.find(patt[i])==m.end())
                continue;
            if(m[patt[i]]<=min)
            {
                min=m[patt[i]];
                res=patt[i];
            }
        }
        cout<<res<<endl;
    }
}