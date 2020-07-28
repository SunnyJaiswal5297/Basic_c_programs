#include<iostream>
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
        int sum=0;
        for(i=0;i<n-1;i++)
        {
            sum=max(sum,(a[i]+a[i+1]));
        }
        cout<<sum<<endl;
    }
	return 0;
}