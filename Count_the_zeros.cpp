#include<iostream>
using namespace std;

int count(int arr[],int s,int e)
{
    int m;
    while(s<=e)
    {
        int m=s+(e-s)/2;
        if(arr[m]==0)
        {
            e=m-1;
        }
        else
        {
            s=m+1;
        }
    }
    m=s+(e-s)/2;
    return m; 
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
        cout<<(n-count(arr,0,n-1));
    }
    return 0;
}