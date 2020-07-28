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
        int count=0,max=0;
        for(i=0;i<n;i++)
        {
            if(a[i]>=0)
                count++;
            else
            {
                count=0;
            }
            if(count>max)
                max=count;
        }
        cout<<max<<endl;
    }
	return 0;
}