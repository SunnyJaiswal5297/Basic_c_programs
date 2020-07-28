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
        int curr_sum=a[0],max_sum=a[0];
        for(i=1;i<n;i++)
        {
            curr_sum=max(curr_sum+a[i],a[i]);
            max_sum=max(curr_sum,max_sum);
        }
        cout<<max_sum<<"\n";
    }
	return 0;
}