#include<iostream>
#include<algorithm>
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
        int sum;
        cin>>sum;
        sort(a,a+n);
        int l,r,j,f=0;
        for(i=0;i<n-3;i++)
        {
            for(j=i+1;j<n-2;j++)
            {
                l=j+1;
                r=n-1;
                while(l<r)
                {
                    if(a[i]+a[j]+a[l]+a[r]==sum)
                    {
                        f=1;
                        break;
                    }
                    else if(a[i]+a[j]+a[l]+a[r]<sum)
                        l++;
                    else
                        r--;
                }
                if(f==1)
                    break;
            }
            if(f==1)
                break;
        }
        if(f==0)
            cout<<"0\n";
        else
            cout<<"1\n";
    }
    return 0;
}