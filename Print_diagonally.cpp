#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n][n],i,j,c=1,k;
        for(i=1;i<=n;i++)
            for(j=1;j<=n;j++)
                a[i][j]=c++;
        for(k=1;k<=n;k++)
        {
            for(i=1,j=k;i<=n && j>=1;i++,j--)
                cout<<a[i][j]<<" ";
        }
        for(k=1;k<n;k++)
        {
            for(i=k+1,j=n;i<=n && j>=1;i++,j--)
                cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}