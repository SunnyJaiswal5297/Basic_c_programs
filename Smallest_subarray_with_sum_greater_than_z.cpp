#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int n,k,i;
        cin>>n>>k;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        int start=0,end=0,min_len=INT_MAX,curr_sum=0;
        while(end<n)
        {
            while(curr_sum<=k && end<n)
                curr_sum+=a[end++];
            while(curr_sum>k && start<end)
            {
                if(min_len>end-start)
                    min_len=end-start;
                curr_sum-=a[start++];
            }
        }
        cout<<min_len<<endl;
    }
	return 0;
}