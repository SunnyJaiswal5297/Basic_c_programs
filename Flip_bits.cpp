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
        int a[n],i,ones_count=0;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
        {
            if(a[i]==0)
                a[i]=1;
            else
            {
                ones_count++;
                a[i]=-1;
            }
        }
        int curr_sum=a[0],max_sum=a[0];
        for(i=1;i<n;i++)
        {
            curr_sum=max(curr_sum+a[i],a[i]);
            if(curr_sum>max_sum)
                max_sum=curr_sum;
        }
        //cout<<max_sum<<" "<<curr_sum<<endl;
        cout<<max_sum+ones_count<<endl;
    }
	return 0;
}