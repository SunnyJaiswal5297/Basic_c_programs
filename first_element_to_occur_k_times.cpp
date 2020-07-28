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
        unordered_map<long long int,long int> ump;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            ump[a[i]]++;
        }
        int f=-1;
        for(i=0;i<n;i++)
        {
            if(ump[a[i]]==k)
            {
                f=a[i];
                break;
            }
        }
        cout<<f<<endl;
    }
	return 0;
}