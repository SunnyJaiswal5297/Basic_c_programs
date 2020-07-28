#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int n,c=0;
        cin>>n;
        int a[n],i,j;
        for(i=0;i<n;i++)
            cin>>a[i];
        unordered_map<int,int> m;
        int sum=0;
        m[0]++;
        for(i=0;i<n;i++)
        {
            sum+=a[i];
            if(m.find(sum)!=m.end())
            {
                c+=m[sum];
            }
            m[sum]++;
        }
        cout<<c<<endl;
    }
	return 0;
}