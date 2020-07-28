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
        int a[n],i,j;
        for(i=0;i<n;i++)
            cin>>a[i];
        int sum=0,p=1,res=0;
        for(i=0;i<n;i++)
        {
            for(j=i;j<n;j++)
            {
                sum+=a[j];
                p*=a[j];
                if(sum==p)
                    res++;
            }
            sum=0;p=1;
            cout<<res<<endl;
        }
    }
	return 0;
}