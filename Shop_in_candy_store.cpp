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
        sort(a,a+n);
        int min=0,max=0;
        int x=0;
        for(i=0;i<n-x;i++)
        {
            min+=a[i];
            x+=k;
        }
        x=0;
        cout<<min<<" ";
        sort(a,a+n,greater<int>());
        for(i=0;i<n-x;i++)
        {
            max+=a[i];
            x+=k;
        }
        cout<<max<<endl;
    }
	return 0;
}