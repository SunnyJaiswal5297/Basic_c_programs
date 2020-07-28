#include<bits/stdc++.h>
using namespace std;
long long int fact(long long int a)
{
    long long int res=1;
    for(int i=1;i<=a;i++)
        res=res*i;
    return res;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int m,n;
        cin>>m>>n;
        int a[m][n],i,j;
        for(i=0;i<m;i++)
            a[i][0]=1;
        for(j=0;j<n;j++)
            a[0][j]=1;
        for(i=1;i<m;i++)
        {
            for(j=1;j<n;j++)
            {
                a[i][j]=a[i-1][j]+a[i][j-1];
            }
        }
        cout<<a[m-1][n-1]<<endl;
    }
	return 0;
}