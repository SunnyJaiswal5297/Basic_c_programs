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
        int a[n],i,sum=0;
        for(i=0;i<n;i++)
            cin>>a[i];
        int b[61]={};
        for(i=0;i<n;i++)
            b[a[i]]++;
        for(i=0;i<61;i++)
        {
            if(b[i])
                sum++;
        }
        while(sum--)
        {
            int freq=0,index=0,count=0;
            for(i=1;i<=60;i++)
            {
                if(b[i]>freq)
                {
                    freq=b[i];
                    index=i;
                }
            }
            count=freq;
            for(int k=1;k<=count;k++)
                cout<<index<<" ";
            b[index]=0;
        }
        cout<<"\n";
    }
    return 0;
}