#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        int a[n],i,j;
        for(i=0;i<n;i++)
            cin>>a[i];
        int sum=0,f=0;
        for(i=0;i<n;i++)
        {
            sum=0;
            for(j=i;j<n;j++)
            {
                sum+=a[j];
                if(sum==s)
                {
                    f=1;
                    break;
                }
                else if(sum>s)
                    break;
            }
            if(f==1)
                break;
        }
        if(f==1)
            cout<<++i<<" "<<++j<<"\n";
        else
            cout<<"-1\n";
    }
    return 0;
}