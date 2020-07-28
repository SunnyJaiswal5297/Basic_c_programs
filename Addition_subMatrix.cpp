#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,i,j;
        cin>>n>>m;
        int a[n][m];
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
                cin>>a[i][j];
        }
        int x1,y1,x2,y2,sum=0;
        cin>>x1>>y1>>x2>>y2;
        for(i=x1;i<=x2;i++)
        {
            for(j=y1;j<=y2;j++)
            {
                sum+=a[i][j];
            }
        }
        cout<<sum<<" ";
        cout<<"\n";
    }
    return 0;
}