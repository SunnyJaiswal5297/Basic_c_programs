#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int n=str.length();
        int dp[n][n],i,j;
        memset(dp,0,sizeof(dp));
        //initialisation part of DP matrix
        //palindrome of length of 1.
        for(i=0;i<n;i++)
            dp[i][i]=1;
        //palindrome of length of 2.
        for(i=0;i<n-1;i++)
            if(str[i]==str[i+1])
                dp[i][i+1]=1;
        //rest of the logic for length>2.
        for(int k=0;k<n-2;k++)
        {
            i=0;
            j=k+2;
            while(i<n-2 && j<n)
            {
                if(str[i]==str[j] && dp[i+1][j-1]==1)
                    dp[i][j]=1;
                else
                    dp[i][j]=0;
                i++;
                j++;
            }
        }
        /*for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                cout<<dp[i][j]<<" ";
            cout<<endl;
        }*/
        int s,e,len=0;
        //logic for finding substring
        for(i=0;i<n;i++)
        {
            int start=0,end=n-1;
            //start logic
            while(dp[i][start]!=1 && start<end)
                start++;
            //end logic
            while(dp[i][end]!=1 && end>start)
                end--;
            if(end-start+1>len)
            {
                len=end-start+1;
                s=start;
                e=end;
            }
        }
        for(i=s;i<=e;i++)
            cout<<str[i];
        cout<<endl;
    }
    return 0;
}