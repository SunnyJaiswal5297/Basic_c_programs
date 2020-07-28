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
        int len=1,sum=0;
        for(i=0;i<n-1;i++)
        {
            if(a[i]<a[i+1])
                len++;
            else
            {
                sum+=(len*(len-1))/2;
                len=1;
            }
        }
        if(len>1)
            sum+=(len*(len-1))/2;
        cout<<sum<<endl;
    }
	return 0;
}
