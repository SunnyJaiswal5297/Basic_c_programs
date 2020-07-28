#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long 
#define reus ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
int32_t main()
{
    reus;   
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.length();
        vector<int> a;
        for(int i=0;i<n;i++)
        {
            if(i==0)
                a.push_back(n);
            else
                a.push_back((n-i)+a[i-1]-i);
        }
        int sum=0;
        // for(int i=0;i<n;i++)
        //     cout<<a[i]<<" ";
        // cout<<endl;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'
            ||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            sum+=a[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}