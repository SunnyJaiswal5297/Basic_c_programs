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
        int a[n][n],i,j;
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                cin>>a[i][j];
        int b[n][n]={0};
        for(i=1;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                int max=INT_MIN;
                if(a[i-1][j]>max)
                    max=a[i-1][j];
                if(j<n-1 && a[i-1][j+1]>max)
                    max=a[i-1][j+1];
                if(j>0 && a[i-1][j-1]>max)
                    max=a[i-1][j-1];
                a[i][j]=a[i][j]+max;
            }
        }
        cout<<max(a[n-1][0],a[n-1][n-1])<<endl;
    }
    return 0;
}