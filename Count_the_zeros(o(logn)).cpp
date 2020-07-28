#include<iostream>
using namespace std;

int count(int arr[],int s,int e)
{
    if(s<=e)
    {
        int m=s+e/2;
        if(a[m]==0)
        {
            return count(arr,s,m-1);
        }
        else
        {
            return count(arr,m+1,e);   
        }
    }
    return (n-mid)+1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
            cin>>arr[i];
        int res=count(arr,0,n-1);
        cout<<res;
    }
    return 0;
}