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
        for(int i=n;i<=m;i++)
        {
            unordered_map<int,int> ump;
            int x=i;
            while(x>0)
            {
                int rem=x%10;
                ump[rem]++;
                x=x/10;
            }
            int f=0;
            for(auto itr:ump)
            {
                if(itr.second>1)
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
                cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}