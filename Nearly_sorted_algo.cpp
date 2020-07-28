#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int n,k;
        cin>>n>>k;
        int a[n],i;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=1;i<n;i++)
        {
            int min=a[i];
            int j=i-1;
            while(j>=0 && a[j]>=min)
            {
                a[j+1]=a[j];
                j--;
            }
            a[j+1]=min;
        }
        for(i=0;i<n;i++)
            cout<<a[i]<<" ";
    }
	return 0;
}