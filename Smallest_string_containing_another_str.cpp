#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str1,str2;
        cin>>str1;
        cin>>str2;
        int n=str1.length();
        int m=str2.length();
        int pat[256]={0},i;
        for(i=0;i<m;i++)
            pat[str2[i]]++;
        int str[256]={0},count=0,s=0,min=INT_MAX,st=-1;
        for(i=0;i<n;i++)
        {
            str[str1[i]]++;
            if(pat[str1[i]]!=0 && str[str1[i]]<=pat[str1[i]])
                count++;
            if(count==m)
            {
                while(str[str1[s]]>pat[str1[s]] || pat[str1[s]]==0)
                {
                    if(str[str1[s]]>pat[str1[s]])
                        str[str1[s]]--;
                    s++;
                }
                int e=i-s+1;
                if(e<min)
                {
                    min=e;
                    st=s;
                }
            }
        }
        if(st==-1)
            cout<<"-1\n";
        else
            cout<<str1.substr(st,min)<<endl;
    }
    return 0;
}
