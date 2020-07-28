#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i;
        cin>>n>>k;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
            cout<<a[i]<<" ";
        int count=a[0],f=0;
        for(i=0;i<n;)
        {
            if(a[i]==count)
            {
                count++;
                i++;
            }
            else
            {
                k--;
                if(k==0)
                {
                    f=1;
                    cout<<count<<"\n";
                    break;
                }
                count++;
            }
        }
        if(f==0)
            cout<<"-1\n";
    }
    return 0;
}