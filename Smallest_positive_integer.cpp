#include<bits/stdc++.h>
using namespace std;

int missingNumber(int a[], int n) 
{ 
    long int max=1,i;
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            if(a[i]>=max)
                max=a[i];
        }
    }
    int max_arr[max];
    for(i=1;i<=max;i++)
        max_arr[i]=0;
    for(i=0;i<n;i++)
        max_arr[a[i]]=1;
    for(i=1;i<=max;i++)
        if(max_arr[i]==0)
            break;
    return i;
} 

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        cout<<missingNumber(arr, n)<<endl;
    }
    return 0; 
}