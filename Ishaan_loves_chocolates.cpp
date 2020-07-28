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
        int l=0,r=n-1;
        while(l!=r)
        {
            if(a[l]<=a[r])
                r--;
            else
                l++;
        }
        cout<<a[l]<<endl;
    }
    return 0;
}