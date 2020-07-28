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
        int left,res=0,count=0;
        for(i=0;i<n;i++)
        {
            if(a[i]%k==0)
                count++;
        }
        if(n%2==0)
            left=n/2-count;
        else
            left=n/2-count+1;
        int b[n];
        for(i=0;i<n;i++)
        {
            if(a[i]%k!=0)
                b[i]=abs((a[i]%k)-k);
            else
                b[i]=0;
        }
        sort(b,b+n);
        for(i=0;i<n;i++)
            cout<<b[i]<<" ";
        i=0;
        while(left>0)
        {
            res+=b[i];
            if(b[i]>0)
                left--;
            i++;
        }
        cout<<res<<endl;
    }
	return 0;
}