#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        int f;
        for(i=0;i<n;i++)
        {
            f=0;
            if(a[i]==1 || a[i]==2 || a[i]==3)
            {
                f=1;
                cout<<a[i]<<" ";
            }
            else if(a[i]>=10)
            {
                int num=a[i];
                while(num)
                {
                    int k=num%10;
                    num/=10;
                    if(k==1 || k==2 || k==3)
                        f=1;
                    if(f==0)
                        break;
                }
                if(f==1)
                    cout<<a[i]<<" ";
            }
        }
        if(f==0)
            cout<<"-1\n";
        else
            cout<<"\n";
    }
    return 0;
}