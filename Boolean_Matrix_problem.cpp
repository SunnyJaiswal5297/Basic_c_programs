#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int n,m;
        cin>>n>>m;
        int a[n][m],b[n][m],i,j,num,row[n],col[m];
        memset(row,0,n*sizeof(int));
        memset(col,0,m*sizeof(int));
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>num;
                if(num==1)
                {
                    row[i]=1;
                    col[j]=1;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(row[i] || col[j])
                    b[i][j]=1;
                else
                    b[i][j]=0;
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
                cout<<b[i][j]<<" ";
            cout<<endl;
        }
        
    }
	return 0;
}