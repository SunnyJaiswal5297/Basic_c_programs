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
        for(i=0;i<n;i++)
        {
            if(a[i]<0)
                cout<<a[i]<<" ";
        }
        for(i=0;i<n;i++)
        {
            if(a[i]>0)
                cout<<a[i]<<" ";
        }
        cout<<endl;
    }
	return 0;
}