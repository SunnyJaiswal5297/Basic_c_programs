#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        int coins[m],i,j;
        for(i=0;i<m;i++)
            cin>>coins[i];
        int n;
        cin>>n;
        int arr[n+1];
        for(i=0;i<=n;i++)
            arr[i]=0;
        arr[0]=1;
        for(i=0;i<m;i++)
        {
            cout<<coins[i]<<"\n";
            for(j=1;j<=n;j++)
            {
                if(coins[i]<=j)
                {
                    arr[j]=arr[j]+arr[j-coins[i]];
                }
            }
            for(int k=0;k<=n;k++)
                cout<<arr[k]<<" ";
            cout<<endl;
        }
        cout<<arr[n]<<endl;
    }
    return 0;
}