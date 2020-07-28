#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        int n,i;
        cin>>n;
        int arr[n],dep[n],j;
        for(i=0;i<n;i++)
            cin>>arr[i];
        for(i=0;i<n;i++)
            cin>>dep[i];
        sort(arr,arr+n);
        sort(dep,dep+n);
        int plt_count=1,res=1;
        i=1;j=0;
        while(i<n && j<n)
        {
            if(arr[i]<=dep[j])
            {
                plt_count++;
                i++;
                if(plt_count>res)
                    res=plt_count;
            }
            else
            {
                plt_count--;
                j++;
            }
        }
        cout<<res<<"\n";
    }
    return 0;
}