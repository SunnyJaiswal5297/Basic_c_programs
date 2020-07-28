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
	    int a[n],inc[n],dec[n],i,j;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        inc[i]=a[i];
	        dec[i]=a[i];
	    }
	    for(i=1;i<n;i++)
	    {
	        for(j=0;j<i;j++)
            {
                if(a[i]>a[j] && inc[i]<inc[j]+a[i])
                    inc[i]=inc[j]+a[i];
            }
	    }
	    for(i=n-2;i>=0;i--)
        {
            for(j=n-1;j>i;j--)
            {
                if(a[i]>a[j] && dec[i]<dec[j]+a[i])
                    dec[i]=dec[j]+a[i];
            }
        }
        int mx=0;
        for(i=0;i<n;i++)
            mx=max(mx,(inc[i]+dec[i]-a[i]));
        cout<<mx<<endl;

    }
	return 0;
}
