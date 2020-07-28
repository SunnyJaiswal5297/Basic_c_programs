#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        long long int n;
        cin>>n;
        long long int a[n],i;
        for(i=0;i<n;i++)
            cin>>a[i];
        long long int j=1,sum=0;
        i=0;
        for(i=0;i<n;i++)
        {
            sum=(sum+a[i]*(n-i)*j)%1000000007;
            j++;
        }
        cout<<sum<<endl;
    }
	return 0;
}