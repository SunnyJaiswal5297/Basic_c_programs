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
            if(sum==k)
                max_len=i+1;
            if(ump.find(sum)==ump.end())
                ump[sum]=i;
            if(ump.find(sum-k)!=ump.end())
            {
                auto it=ump.find(sum-k);
                if(max_len<i-it->second)
                    max_len=i-it->second;
            }
        }
        cout<<max_len<<endl;  
    }
	return 0;
}