#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
        int n,m,k,i,lcm=1;
        cin>>n>>m>>k;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
        {
            int temp=a[i],i=2;
            map<int,int> mp;
            while(temp>1 && i<=temp)
            {
                if(temp%i==0)
                {
                    mp[i]++;
                    temp/=i;
                    i=2;
                }
                else
                {
                    i++;
                }
            }
        }
	}
	return 0;
}