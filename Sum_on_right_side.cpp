#include<iostream>
#include<time.h>
using namespace std;

int main()
{
    clock_t start=clock();
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n],b[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            b[i]=0;
        }
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(arr[i]>arr[j])
                {
                    b[i]++;
                }
            }
        }
        for(i=0;i<n;i++)
            cout<<b[i]<<" ";
        cout<<"\n";
    }
    cout<<((clock()-start)/CLOCKS_PER_SEC); 
    return 0;
}