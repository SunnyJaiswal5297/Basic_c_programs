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
        int k;
        cin>>k;
        int temp=a[k];
        swap(a[k],a[n-1]);
        sort(a,a+(n-1));
        for(i=n-1;i>=k;i--)
            a[i]=a[i-1];
        a[k]=temp;
        for(i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
	return 0;
}