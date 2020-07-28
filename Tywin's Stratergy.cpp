#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int n,k;
        cin>>n>>k;
        int a[n],i;
        for(i=0;i<n;i++)
            cin>>a[i];
        int left_cycle,count=0;
        for(i=0;i<n;i++)
        {
            if(a[i]%k==0)
                count++;
        }
        left_cycle=int(ceil(n/2))-count;
        cout<<left_cycle;

    }
	return 0;
}