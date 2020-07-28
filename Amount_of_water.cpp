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
        int a[n],i;
        for(i=0;i<n;i++)
            cin>>a[i];
        int total=0;
        for(i=0;i<n-2;i++)
        {
            if(a[i+1]>a[i])
                continue;
            else
            {
                if(a[i+2]>a[i+1])
                {
                    total+=(a[i]>a[i+2]?a[i+2]:a[i])-a[i+1];   
                }   
            }
            cout<<total<<" "<<i<<"\n";
        }
        cout<<total<<"\n";
    }
    return 0;
}