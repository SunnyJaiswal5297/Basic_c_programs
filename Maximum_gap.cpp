#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,max=0,res;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n-1;i++)
        {
            int diff;
            diff=abs(a[i]-a[i+1]);
            if(diff>=max)
            {
                max=diff;
                res=max;
            }
        }
        cout<<max<<"\n";
    }
    return 0;
}