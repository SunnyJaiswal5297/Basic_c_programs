#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,f=0,x;
        cin>>n>>x;
        int a[n],i,j;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
        {
            int y=x-a[i];
            if(y<0)
                continue;
            else
            {
                for(j=0;a[j];j++)
                    if(a[j]==y)
                    {
                        f=1;
                        break;
                    }
            }
            if(f==1)
                break;
        }
        if(f==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}