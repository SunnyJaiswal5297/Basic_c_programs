#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[1000001]={0},i,num;
        for(i=0;i<n;i++)
        {
            cin>>num;
            if(num>0)
                a[num]=1;
        }
        int f=0;
        for(i=1;i<=1000001;i++)
        {
            if(a[i]==0)
            {
                f=1;
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}