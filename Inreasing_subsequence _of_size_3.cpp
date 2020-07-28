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
        int a[n],i;
        map<int,int> m;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            m[a[i]]=i;
        }
        int count=3;
        map<int,int>:: iterator it=m.end()-1;
        while(1)
        {
            (it-1).second;
        }
    }
	return 0;
}