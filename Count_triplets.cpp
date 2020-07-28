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
        int a[n],i,j;
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int f=0,count=0;
        for(i=0;i<n-2;i++)
        {
            for(j=i+1;j<n-1;j++)
            {
                if((a[i]+a[j])==a[j+1])
                {
                    f=1;
                    count++;
                    cout<<a[i]<<" "<<a[j]<<"\n";
                }
                else if((a[i]+a[j])>a[n-1])
                    break;
                else if((a[i]+a[j])>a[j+1])
                {
                    int sum=a[i]+a[j];
                    int k=j+1;
                    while(sum>=a[k] && k<n)
                    {   
                        if(sum==a[k] && k<n)
                        {
                            count++;
                            cout<<a[i]<<" "<<a[j]<<"\n";
                            break;
                        }
                        k++;
                    }
                }
            }
        }
        if(f==0)
            cout<<"-1\n";
        else
            cout<<count<<"\n";
    }
    return 0;
}