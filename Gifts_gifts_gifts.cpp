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
        int a[n*n],i,j;
        int len=n*n;
        for(i=0;i<len;i++)
            cin>>a[i];
        int visited[n+1];
        memset(visited,0,sizeof(visited));
        for(i=0;i<len;i+=n)
        {
            int j=i,end=i+n;
            while(j<end)
            {
                if(visited[a[j]]==0)
                {
                    cout<<a[j]<<" ";
                    visited[a[j]]=1;
                    break;
                }
                j++;
            }
        }
        cout<<endl;
    }
    return 0;
}