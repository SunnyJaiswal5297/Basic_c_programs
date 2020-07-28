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
        int f=0;
        for(i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1] || a[i+1]-a[i]==1)
                f=1;
            else if(a[i+1]-a[i]>1)
            {
                f=0;
                break;
            }
        }
        if(f==0)
            cout<<"No\n";
        else
            cout<<"Yes\n";
    }
	return 0;
}