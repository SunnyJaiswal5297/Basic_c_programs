#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],i,j;
        for(i=0;i<n;i++)
            cin>>a[i];
        int sum1=0,sum2=0,f=0;
        if(n==1)
        {
            f=1;
            cout<<"1\n";
        }
        else
        {
            for(i=0,j=n-1;i<j;i++,j--)
            {
                sum1+=a[i];
                sum2+=a[j];
                if(sum1==sum2)
                {   
                    f=1;
                    cout<<(i+j)/2<<"\n";
                    break;
                }
            }

        }
        if(f==0)
            cout<<"-1\n";
    }
    return 0;
}