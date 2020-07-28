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
        int64_t a[n],b[n];
        a[0]=1;
        b[0]=1;
        for(int i=1;i<n;i++)
        {
            a[i]=a[i-1]+b[i-1];
            b[i]=a[i-1];
        }
        cout<<(a[n-1]+b[n-1])%1000000007<<endl;
    }
	return 0;
}