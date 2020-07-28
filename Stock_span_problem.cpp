#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {   
        int n;
        cin>>n;
        int a[n],res[n],i;
        for(i=0;i<n;i++)
            cin>>a[i];
        stack<int> stk;
        stk.push(0);
        res[0]=1;
        for(i=1;i<n;i++)
        {
            while(!stk.empty() && a[stk.top()]<=a[i])
                stk.pop();
            if(stk.empty())
                res[i]=i+1;
            else
                res[i]=i-stk.top();
            stk.push(i);
        }
        for(i=0;i<n;i++)
            cout<<res[i]<<" ";
        cout<<endl;
    }
    return 0;
}
