#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int n,k;
        cin>>k>>n;
        int a[n],i;
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int big=a[n-1]-k;
        int small=a[0]+k;
        int res=a[n-1]-a[0];
        if(small>big)
            swap(small,big);
        for(i=1;i<n-1;i++)
        {
            int sub=a[i]-k;
            int add=a[i]+k;
            if(add>=small || sub<=big)
                continue;
            if(big-sub<=add-small)
                small=sub;
            else
                big=add;
        }
        cout<<min(res,big-small)<<endl;
    }
	return 0;
}