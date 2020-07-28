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
        int a[n+1]={0},i,twice,missing;
        for(i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(a[x]==n+1)
            {
                twice=x;
            }
            else
                a[x]=n+1;
        }
        for(i=1;i<=n;i++)
        {
            if(a[i]==0)
            {
                missing=i;
                break;
            }
        }
        cout<<twice<<" "<<missing<<"\n";
    }
    return 0;
}