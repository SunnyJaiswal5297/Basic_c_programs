#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int m,n,i,j;
        cin>>m>>n;
        char str1[m],str2[n];
        for(i=0;i<m;i++)
            cin>>str1[i];
        for(i=0;i<n;i++)
            cin>>str2[i];
        int t[m+1][n+1];
        for(i=0;i<=m;i++)
        {
            for(j=0;j<=n;j++)
            {
                if(i==0)
                    t[i][j]=j;
                else if(j==0)
                    t[i][j]=i;
                else if(str1[i-1]==str2[j-1])
                {
                    t[i][j]=t[i-1][j-1];
                }
                else
                {
                    int temp=min(t[i-1][j],t[i][j-1]);
                    t[i][j]=1+min(temp,t[i-1][j-1]);
                }
            }
        }
        cout<<t[m][n]<<endl;
    }
    return 0;
}