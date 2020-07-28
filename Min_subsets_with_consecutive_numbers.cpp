#include<iostream>
#include<algorithm>
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
        for(i=0;i<n;i++)
            cout<<a[i]<<" ";
        int len=1,sum=0;
        for(i=0;i<n-1;i++)
        {
            if(a[i+1]-a[i]==1)
                len++;
            else
            {
                sum++;
                len=1;
            }
            if(i==n-2)
                sum++;
        }
        cout<<sum<<endl;
    }
	return 0;
}