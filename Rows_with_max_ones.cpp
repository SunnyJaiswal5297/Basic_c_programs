#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n][m],i,j;
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                cin>>a[i][j];
        int max=0,res=-1;
        i=0;j=0;
        while(i<n && j>=0)
        {
            if(a[i][j]==0)
                j++;
            else if(a[i][j]==1)
            {
                if(m-j>max)
                {
                    max=m-j;
                    res=i;
                }
                i++;
                j=0;
            }
            if(j==m)
            {
                i++;
                j=0;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}