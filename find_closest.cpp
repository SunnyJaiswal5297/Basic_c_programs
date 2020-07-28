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
        int min=INT_MAX;
        int res=0;
        for(i=0;i<n;i++)
        {
            if(abs(a[i]-k)<=min)
            {
                if(abs(a[i]-k)==min)
                {
                    if(a[i]>res)
                        res=a[i];
                }
                else
                    res=a[i];
                min=abs(a[i]-k);
            }
        }
        cout<<res<<endl;
    }
	return 0;
}