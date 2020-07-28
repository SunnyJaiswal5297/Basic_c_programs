#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,n,i;
        cin>>a>>n;
        int hash[10]={0};
        while(n!=0)
        {
            long long int res=pow(a,n);
            while(res)
            {
                int rem=res%10;
                hash[rem]++;
                res=res/10;
            }
            n--;
        }
        string res={};
        for(i=1;i<10;i++)
        {
            while(hash[i])
            {
                res=res+to_string(i);
                hash[i]--;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}