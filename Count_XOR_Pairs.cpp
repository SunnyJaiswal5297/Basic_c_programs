#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,count;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        for(i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<"\n";
        count=0;
        for(i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                    count++;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}