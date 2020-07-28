#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        cin>>s;
        int ch[26]={0},i,k;
        cin>>k;
        for(i=0;i<s.length();i++)
            ch[s[i]-'a']++;
        int sum=0;
        for(i=0;i<26;i++)
        {
            if(ch[i])
                sum+=ch[i]*ch[i];
        }
        sort(ch,ch+26,greater<int>();
        i=0;
        while(1)
        {
            if(ch[i]-k>=0)
            {
                ch[i]=ch[i]-k;
                break;
            }
            else
                ch[i]=ch[i]-k;
            i++;   
        }
        sum=0;
        for(i=0;i<26;i++)
        {
            if(ch[i])
                sum+=ch[i]*ch[i];
        }
        cout<<sum<<"\n";
    }
    return 0;
}