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
        int a[n],i,c=0;
        unordered_map<int,int> ump;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            ump[a[i]]++;
        }
        for(auto it=ump.begin();it!=ump.end();++it)
        {
            c+=it->second/2;
        }
        cout<<c*2<<endl;
    }
	return 0;
}