#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,k,f=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n-2;i++)
        {
            f=0;
            for(j=i+1;j<n-1;j++)
            {
                for(k=j+1;k<n;k++)
                {
                    int sum=a[i]+a[j]+a[k];
                    if (sum==0)
                    {
                        f=1;
                        cout<<"1\n";
                        break;
                    }
                }
                if(f==1)
                    break;
            }
            if(f==1)
                break;
        }
        if(f==0)
            cout<<"0\n";
    }
    return 0;
}
