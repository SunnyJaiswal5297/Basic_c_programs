#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int n,t;
        cin>>n>>t;
        int a[n],i,start;
        for(i=0;i<n;i++)
            cin>>a[i];
        //sliding window logic
        int res=0,sum=0;
        for(i=0;i<t;i++)
            sum+=a[i];
        res=sum;
        if(i==n)
            cout<<res<<endl;
        else
        {
            start=0;
            for(;start<n;i=(i+1)%n)
            {
                sum=sum+a[i]-a[start++];
                res=max(res,sum);
            }
            cout<<res<<endl;
        }
    }
	return 0;
}
