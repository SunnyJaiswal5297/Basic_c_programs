#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string a;
        getline(cin,a);
        unordered_map<char,int> ump;
        for(int i=0;i<a.length();i++)
        {
            if(a[i]==' ')
                continue;
            else
                ump[a[i]]++;
        }
        for(int i=0;i<a.length();i++)
        {
            if(a[i]==' ')
                cout<<" ";
            else
            {
                if(ump[a[i]]>0)
                    cout<<a[i];
                ump[a[i]]=0;
            }
        }
    }
    return 0;
}