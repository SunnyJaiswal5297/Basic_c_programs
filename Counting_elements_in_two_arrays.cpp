#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        int arr1[m],arr2[n],i;
        for(i=0;i<m;i++)
            cin>>arr1[i];
        for(i=0;i<n;i++)
            cin>>arr2[i];
        sort(arr2,arr2+n);
        int l=0,r=n-1;
        for(i=0;i<m;i++)
        {
            l=0,r=n-1;
            while(l<=r)
            {
                int mid=(l+r)/2;
                if(arr1[i]>=arr2[mid])
                {
                    l=mid+1;;
                }
                else
                {
                    r=mid-1;
                }
            }
            cout<<(r+1)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
