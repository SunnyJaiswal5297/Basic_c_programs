#include <bits/stdc++.h>
using namespace std;

int findLongestConseqSubseq(int arr[], int n);
 
int main()
{
    int  t,n,i,a[100001];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>a[i];
        cout<<findLongestConseqSubseq(a, n)<<endl;
    }  
    return 0;
}
int findLongestConseqSubseq(int arr[], int n)
{
    sort(arr,arr+n);
    int count=1,max=1,i;
    for(i=1;i<n;i++)
    {
        if(arr[i]-arr[i-1]==1)
            count++;
        else if(arr[i]==arr[i-1])
            continue;
        else
            count=1;
        if(count>max)
            max=count;
    }
    return max;
}