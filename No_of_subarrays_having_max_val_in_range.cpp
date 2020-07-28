#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int n,l,r;
        cin>>n>>l>>r;
        int a[n],i;
        for(i=0;i<n;i++)
            cin>>a[i];
        int j=0,res=0,curr=0;
        i=0;
        while(j<n)
        {
            if(a[j]>=l && a[j]<=r)
            {
                curr=j-i+1;
            }
            if(a[j]>r)
            {
                curr=0;
                i=j+1;
            }
            res+=curr;
            j++;
        }
        cout<<res<<endl;
    }
	return 0;
}