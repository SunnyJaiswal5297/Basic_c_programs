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
        int a[n],b[n],i;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        int s=0,e=0;
        if(n==1)
            cout<<s<<" "<<e<<endl;
        else
        {
            for(i=0;i<n;i++)
            {
                if(a[i]!=b[i])
                {
                    s=i;
                    break;
                }
            }
            for(i=n-1;i>=0;i--)
            {
                if(a[i]!=b[i])
                {
                    e=i;
                    break;
                }
            }
            cout<<s<<" "<<e<<endl;
        }
    }
	return 0;
}