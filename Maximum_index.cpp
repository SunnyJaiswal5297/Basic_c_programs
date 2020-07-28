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
        int max=0;
        for(i=0;i<n-1;i++)
        {
            for(j=n-1;j>i;j--)
            {
                if(a[i]<=a[j] && (j-i)>=max)
                {
                    max=j-i;
                    break;
                }
            }
        }
        cout<<max<<"\n";
    }
    return 0;
}