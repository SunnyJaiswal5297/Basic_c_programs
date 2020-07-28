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
        int a[n],i,j;
        for(i=0;i<n;i++)
            cin>>a[i];
        int k=0,l=n-1,f=0;
        for(i=0;a[i];i++)
        {
            f=0;
            for(j=0;j<n;j++)
            {
                if(a[j]==k+i || a[j]==l-i)
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
                break;
        }
        cout<<f<<"\n";
    }
    return 0;
}