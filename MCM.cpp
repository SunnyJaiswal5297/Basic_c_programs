#include<bits/stdc++.h>
using namespace std;

int solve_MCM(int a[],int i,int j)
{
    if(i>=j)
        return 0;
    int ans=INT_MAX;
    for(int k=i;k<=j-1;k++)
    {
        int temp=solve_MCM(a,i,k)+solve_MCM(a,k+1,j)+a[i-1]*a[k]*a[j];
        cout<<temp<<endl;
        if(temp<ans)
            ans=temp;
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],i;
        for(i=0;i<n;i++)
            cin>>a[i];
        int res=solve_MCM(a,1,n-1);
        cout<<res<<endl;
    }
    return 0;
}