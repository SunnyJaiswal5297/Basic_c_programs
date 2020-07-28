#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n],i;
        for(i=0;i<n;i++)
            cin>>a[i];
        int count=1;
        int max=a[0];
        for(i=1;i<n;i++)
        {
            if(a[i]>max)
            {
                count++;
                max=a[i];
                cout<<a[i]<<" ";
            }
            else if(a[i]==max && a[i]>a[i-1])
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}