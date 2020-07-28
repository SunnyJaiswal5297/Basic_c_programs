#include<bits/stdc++.h>
using namespace std;

int binarysearch(int low,int high,int ele,long long int a[])
{
    int mid=(low+high)/2;
    while(low<=high)
    {
        if(a[mid]<ele)
            return binarysearch(mid+1,high,ele,a);
        return binarysearch(low,mid-1,ele,a);
    }
    return low;
}
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		long long int a[n][m],i,j,mi=INT_MAX;
		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
				cin>>a[i][j];
		for(i=0;i<n;i++)
			sort(a[i],a[i]+m);
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<m;j++)
            {
                int index=binarysearch(0,m-1,a[i][j],a[i+1]);
                mi=min(mi,abs(a[i][j]-a[i+1][index]));
                if(index-1>=0)
                    mi=min(mi,abs(a[i][j]-a[i+1][index-1]));
            }
        }
        cout<<mi<<endl;
	}
	return 0;
}