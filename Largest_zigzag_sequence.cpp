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
        int a[n][n],b[n],index[n],i,j;
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
            {
                cin>>a[i][j];
                if(i==0)
                {
                    b[j]=a[i][j];
                    index[j]=j;
                }
            }
        for(i=0;i<n;i++)
            cout<<index[i]<<" ";
        cout<<endl;
        for(i=1;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(b[j]+a[i][j]>b[j])
                {
                    b[j]=b[j]+a[i][j];
                }
            }
        }
    }
    return 0;
}