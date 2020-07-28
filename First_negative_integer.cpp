#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,f;
        cin>>n;
        int a[n],i;
        for(i=0;i<n;i++)
            cin>>a[i];
        cin>>k;
        for(i=0;i<n-k+1;i++)
        {
            f=0;
            for(int j=i;j<k+i;j++)
            {
                if(a[j]<0)
                {
                    cout<<a[j]<<" ";
                    f=1;
                    break;
                }
            }
            if(f==0)
                cout<<f<<" ";
            cout<<endl;
        }
    }
    return 0;
}