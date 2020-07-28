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
        int count=0,max;
        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                count+=1;
                max=a[0];
            }
            else
            {
                if(a[i]>a[i-1] && a[i]>a[0] && a[i]>max)
                {
                    count++;
                    max=a[i];
                }
            }
        }
        cout<<count<<"\n";
    }
}