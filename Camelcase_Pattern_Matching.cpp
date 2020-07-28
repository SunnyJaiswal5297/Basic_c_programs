#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        string str[n],pat;
        for(i=0;i<n;i++)
            cin>>str[i];
        cin>>pat;
        /*for(i=0;i<n;i++)
            cout<<str[i]<<" ";*/
        string a[n];
        for(i=0;i<n;i++)
        {
            int j=0;
            while(str[i][j]!='\0')
            {
                if(str[i][j]>=65 && str[i][j]<=90)
                {
                    a[i].push_back(str[i][j]);
                }
                j++;
            }
        }
        /*for(i=0;i<n;i++)
            cout<<a[i]<<" ";*/
        bool rejected[n]={false};
        for(i=0;i<pat.length();i++)
        {
            int f=0;
            for(int j=0;j<n;j++)
            {
                if(!rejected[j] && i<a[j].length() && pat[i]==a[j][i])
                {
                    f=1;
                }
                else
                    rejected[j]=true;
            }
            if(f==0)
            {
                cout<<"No match found";
                break;
            }
        }
        set<string> s;
        for(i=0;i<n;i++)
        {
            if(!rejected[i])
                s.insert(str[i]);
        }
        for(auto x:s)
            cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}