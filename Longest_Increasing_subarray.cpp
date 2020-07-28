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
        int len=0,max_len=0,flag=0;
        for(i=0;i<n-1;i++)
        {
            if(a[i]<a[i+1])
            {
                len++;
                if(len>=max_len)
                    max_len=len;
            }
            else
            {
                len=0;
            }
        }
        cout<<max_len<<endl;
    }
	return 0;
}