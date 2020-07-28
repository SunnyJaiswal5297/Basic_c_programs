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
        int curr_sum=0,max_sum=0;
        for(i=0;i<n;i++)
        {
            max_sum+=a[i];
            if(max_sum<0)
                max_sum=0;
            if(curr_sum<max_sum)
                curr_sum=max_sum;
        }
        cout<<curr_sum<<"\n";
    }
	return 0;
}