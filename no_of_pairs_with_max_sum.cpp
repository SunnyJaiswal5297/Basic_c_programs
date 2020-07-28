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
        int count=0;
        if(a[n-1]==a[n-2])
        {
            int max=a[n-1];
            for(i=0;i<n;i++)
            {
                if(a[i]==max)
                    count++;
            }
            cout<<(count*(count-1))/2<<endl;
        }
        else
        {
            int max=a[n-2];
            for(i=0;i<n-1;i++)
                if(a[i]==max)
                    count++;
            cout<<count<<endl;
        }
    }
	return 0;
}