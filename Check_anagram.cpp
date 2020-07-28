#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        int ch[26]={},f=0;
        if(s1.length()!=s2.length())
            cout<<"NO\n";
        else
        {
            for (int i = 0; i < s1.length(); i++)
            {
                ch[s1[i]-'a']++;   
            }
            for (int i = 0; i < s2.length(); i++)
            {
                ch[s2[i]-'a']--;   
            }
            for(int i=0;i<26;i++)
            {
                if(ch[i]!=0)
                {
                    cout<<"NO\n";
                    f=1;
                    break;
                }
            }
            if(f==0)
                cout<<"YES\n";
        }
    }
    return 0;
}