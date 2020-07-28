#include<iostream>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,k,count=0;
        cin>>n>>k;;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n-1;i++)
        {
            if(a[i]>k)
                continue;
            else
            {
                for(j=i+1;j<n;j++)
                {
                    if(a[j]>k)
                        continue;
                    else if(a[i]+a[j]==k)
                        count++;
                }
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}