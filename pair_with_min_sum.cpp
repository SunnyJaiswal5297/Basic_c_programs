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
        int a[2*n],i;
        for(i=0;i<2*n;i++)
            cin>>a[i];
        sort(a,a+2*n);
        int l=0,r=2*n-1;
        while(l<r)
        {
            cout<<"("<<a[l]<<","<<a[r]<<")";
            l++;
            r--;
        }
        cout<<endl;
    }
	return 0;
}