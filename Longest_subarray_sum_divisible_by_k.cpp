#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int n,k;
        cin>>n>>k;
        int a[n],i;
        for(i=0;i<n;i++)
            cin>>a[i];
        int sum=0,max_len=0;
        unordered_map<int,int> ump;
        for(i=0;i<n;i++)
        {
            sum+=a[i];
            if(sum%k==0)
                max_len=i+1;
            if(ump.find(sum)==ump.end())
                ump[sum]=i;
            else
            {
                auto it=ump.find(sum);
                if(it->second<=i)
                    max_len=i-it->second;
                if(ump.find(k+sum)!=ump.end())
                {
                    int temp1=ump.find(k+sum)->second;
                    if(i-temp1>=max_len)
                        max_len=i-temp1;
                }
                if(ump.find(sum-k)!=ump.end())
                {
                    int temp1=ump.find(sum-k)->second;
                    if(i-temp1>=max_len)
                        max_len=i-temp1;
                }
            }
        }
        cout<<max_len<<endl;  
    }
	return 0;
}