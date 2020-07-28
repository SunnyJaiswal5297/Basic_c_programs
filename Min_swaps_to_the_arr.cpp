#include<bits/stdc++.h>
using namespace std;

int minSwaps(int A[], int N);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    cout<<minSwaps(a,n)<<endl;
	}
}

int minSwaps(int a[], int n)
{
    pair<int,int> vp[n];
    for(int i=0;i<n;i++)
    {
        vp[i].first=a[i];
        vp[i].second=i;
    }
    sort(vp,vp+n);
    vector<bool> visited(n,false);
    int res=0;
    for(int i=0;i<n;i++)
    {
        if(visited[i] || vp[i].second==i)
            continue;
        int cycle=0;
        int j=i;
        while(!visited[j])
        {
            visited[j]=true;
            j=vp[j].second;
            cycle++;
        }
        if(cycle>0)
            res+=cycle-1;
    }
    return res;
}
