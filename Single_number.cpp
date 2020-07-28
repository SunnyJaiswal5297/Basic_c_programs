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
        int a[n],i;
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        for(i=0;i<n;i+=2)
        {
            int count=1;
            if(a[i]==a[i+1] && (i+1)<n)
                count++;
            if(count%2!=0)
                break;
        }
        cout<<a[i]<<"\n";
    }
    return 0;
}