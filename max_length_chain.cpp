#include <bits/stdc++.h>
using namespace std;

struct val
{
	int first;
	int second;
};
int maxChainLen(struct val p[],int n);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		val p[n];
		for(int i=0;i<n;i++)
		{
			cin>>p[i].first>>p[i].second;
		}
		cout<<maxChainLen(p,n)<<endl;
	}
	return 0;
}
bool comp(val p1,val p2)
{
    return p1.second<p2.second;
}
int maxChainLen(struct val p[],int n)
{
    int m=1,end=0;
    sort(p,p+n,comp);
    /*for(int i=0;i<n;i++)
        cout<<p[i].first<<" "<<p[i].second<<endl;*/
    for(int i=1;i<n;i++)
    {
        if(p[i].first>p[end].second)
        {
            m++;
            end=i;
        }
    }
    return m;
}