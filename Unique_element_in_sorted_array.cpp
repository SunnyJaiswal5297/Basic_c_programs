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
        int a[n],i;
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        for(i=1;i<n-1;i++)
        {
            if(a[i]!=a[i-1] && a[i]!=a[i+1])
                break;
        }
        cout<<a[i]<<"\n";
    }
	return 0;
}