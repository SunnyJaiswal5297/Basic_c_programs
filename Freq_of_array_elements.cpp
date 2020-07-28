#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n]={0},i,num;
        for(i=0;i<n;i++)
        {
            cin>>num;
            a[num-1]++;
        }
        for(i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
}