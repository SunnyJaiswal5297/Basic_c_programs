#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int n,k;
        cin>>n;
        int a[n],i;
        for(i=0;i<n;i++)
            cin>>a[i];
        cin>>k;
        int sum=0,curr_len=0,flag=0;
        for(i=0;i<n;i++)
        {
            if(a[i]<k)
                curr_len++;
            else if(a[i]==k)
            {
                flag=1;
                curr_len++;
            }
            else if(a[i]>k && flag==1)
            {
                sum+=curr_len;
                curr_len=0;
                flag=0;
            }
            else
            {
                curr_len=0;
                flag=0;
            }
            cout<<curr_len<<" "<<sum<<endl;
        }
        if(flag==1)
            sum+=curr_len;
        cout<<sum<<endl;
    }
	return 0;
}
