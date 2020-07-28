#include <bits/stdc++.h>
using namespace std;
vector<string> vec{"MONDAY","TUESDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY","SUNDAY"};

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int k;
		cin>>k;
		int a[7],i,count=0;
		for(i=0;i<7;i++)
        {
			cin>>a[i];
            count+=a[i];
        }
        int res=k%count;
        if(res==0)
        {
            for(i=6;i>=0;i--)
            {
                if(a[i]>0)
                {
                    res=i;
                    break;
                }
            }
        }
        else if(res>0)
        {
            for(i=0;i<=6;i++)
            {
                if(a[i])
                    res-=a[i];
                if(res<=0)
                {
                    res=i;
                    break;
                }
            }
        }
        cout<<vec[res]<<endl;
	}
	return 0;
}