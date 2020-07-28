#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int n;
        cin>>n;
        int a[n],i,min=INT_MAX;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<min)
                min=a[i];
        }
        int flag=1,count=0;
        while(flag)
        {
            count=0,flag=0;
            for(i=0;i<n;i++)
            {
                if(a[i]>0)
                {
                    a[i]=a[i]-min;
                    if(a[i]>0)
                    {
                        flag=1;
                        count++;
                    }
                }
            }
            min=INT_MAX;
            for(i=0;i<n;i++)
                if(a[i]>0 && a[i]<min)
                    min=a[i];
            if(count>0)
                cout<<count<<" ";
        }
        
    }
	return 0;
}