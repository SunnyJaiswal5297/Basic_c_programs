#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1]={0},i;
        for(i=0;i<n;i++)
        {
            int x;
            cin>>x;
            a[x]++;
        }
        for(i=1;i<=n;i++)
            if(a[i]==0)
                cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}