#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,val;
        cin>>n>>val;
        int a[n],i;
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int cnt=0;
        for(i=0;i<n;i++)
        {
            if(val>a[i])
            {
                val=val-a[i];
                cnt++;
            }
            else
                break;
        }
        cout<<cnt<<endl;
    }
    return 0;
}