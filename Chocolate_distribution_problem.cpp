#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int n,m;
        cin>>n;
        int a[n],i;
        for(i=0;i<n;i++)
            cin>>a[i];
        cin>>m;
        sort(a,a+n);
        int min=a[m-1]-a[0];
        for(i=1;i<=n-m;i++)
        {
            int diff=a[i+m-1]-a[i];
            if(diff<min)
                min=diff;
        }
        cout<<min<<endl;
    }
	return 0;
}