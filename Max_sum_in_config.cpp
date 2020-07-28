#include<iostream>
using namespace std;

int maxSum(int a[],int n)
{
    int i,sum_of_elements=0;
    for(i=0;i<n;i++)
        sum_of_elements+=a[i];
    int curr_val=0;
    for(i=0;i<n;i++)
        curr_val+=i*a[i];
    int res=curr_val;
    for(i=1;i<n;i++)
    {
        int nex_val=curr_val-(sum_of_elements-a[i-1])+a[i-1]*(n-1);
        curr_val=nex_val;
        if(res<nex_val)
            res=nex_val;
    }
    return res;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],i,j;
        for(i=0;i<n;i++)
            cin>>a[i];
        int res=maxSum(a,n);
        cout<<res<<"\n";
    }
    return 0;
}