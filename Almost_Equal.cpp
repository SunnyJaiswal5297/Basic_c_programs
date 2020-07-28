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
        cout<<s1<<"\n"<<s2<<endl;
        int ch[27]={0},i;
        for(i=0;i<s1.length();i++)
            ch[s1[i]-'a']++;
        for(i=0;i<26;i++)
            cout<<ch[i];
        cout<<endl;
        for(i=0;i<s2.length();i++)
            ch[s2[i]-'a']--;
        for(i=0;i<26;i++)
            cout<<ch[i];
        cout<<endl;
        int count=0;
        for(i=0;i<26;i++)
            if(ch[i]!=0)
                count++;
        cout<<count<<endl;
    }
    return 0;
}