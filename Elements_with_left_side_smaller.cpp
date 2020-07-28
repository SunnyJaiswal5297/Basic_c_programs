#include<iostream>
using namespace std;
int max1(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int min1(int a,int b)
{
    if(a>b)
        return b;
    else
        return a;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],i,j,max[n],min[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        max[0]=a[0];
        for(i=1;i<n;i++)
            max[i]=max1(max[i-1],a[i]);
        min[n-1]=a[n-1];
        for(i=n-2;i>=0;i--)
            min[i]=min1(min[i+1],a[i]);
        int f=0;
        for(i=1;i<n-1;i++)
        {
            if(max[i]==min[i])
            {
                f=max[i];
                break;
            }
        }
        if(f)
            cout<<max[i]<<"\n";
        else
            cout<<"-1\n";
    }
    return 0;
}