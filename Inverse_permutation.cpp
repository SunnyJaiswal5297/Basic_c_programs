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
        int arr1[n],arr2[n];
        for(i=1;i<=n;i++)
            cin>>arr1[i];
        for(i=1;i<=n;i++)
        {
            int index;
            index=arr1[i];
            arr2[index]=i;
        }
        for(i=1;i<=n;i++)
            cout<<arr2[i]<<" ";
    }
    return 0;
}