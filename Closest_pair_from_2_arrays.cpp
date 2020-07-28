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
        int a[n],b[m],i,j;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<m;i++)
            cin>>b[i];
        int x,k,l;
        cin>>x;
        int min_diff=x;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(abs((a[i]+b[j])-x)<=min_diff)
                {
                    k=i;l=j;
                    min_diff=abs((a[i]+b[j])-x);
                    cout<<a[k]<<" "<<b[l]<<" "<<min_diff<<"\n";
                }
            }
        }
        cout<<a[k]<<" "<<b[l]<<"\n";
    }
    return 0;
}