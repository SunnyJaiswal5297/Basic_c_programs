#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        long int n;
        cin>>n;
        long long int a[n],i;
        for(i=0;i<n;i++)
            cin>>a[i];
        int even=0,odd=0;
        for(i=0;i<n;i++)
            if(a[i]%2==0)
                even++;
            else
                odd++;
        int b[n],k=0;
        for(i=0;i<n;i++)
            if(a[i]%2!=0)
                b[k++]=a[i];
        for(i=0;i<n;i++)
            if(a[i]%2==0)
                b[k++]=a[i];
        sort(b,b+odd,greater<int>());
        sort(b+odd,b+n);
        for(i=0;i<n;i++)
            cout<<b[i]<<" ";
    }   
	return 0;
}