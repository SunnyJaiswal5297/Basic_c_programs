#include<iostream>
using namespace std;
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
            for(j=0;j<n;j++)
                cin>>a[i][j];
        int index=-1,res=0,f=0;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a[i][j]==1)
                {
                    if(j>index)
                    {
                        index=j;
                        res=i;
                        f=1;
                        break;
                    }
                    else
                        break;
                }
            }
        }
        if(f==1)
            cout<<res<<endl;
        else
            cout<<"-1\n";
    }
	return 0;
}
