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
        int a[n],i;
        for(i=0;i<n;i++)
            cin>>a[i];
        int ladder=a[0];
        int stairs=a[0];
        if(n<=1)
            cout<<"0\n";
        /*if(a[0]==0)
            cout<<"-1\n";*/
        else
        {
            int jumps=1,f=0;
            for(i=1;i<n;i++)
            {
                if(i==n-1)
                    break;
                if(a[i]+i>ladder)
                    ladder=a[i]+i;
                stairs--;
                if(stairs==0)
                {
                    jumps++;
                    stairs=ladder-i;
                }
                if(stairs<=0)
                {
                    jumps=-1;
                    break;
                }
            }
            cout<<jumps<<endl;
        }
    }
    return 0;
}
//1 3 5 8 9 2 6 7 6 8 9