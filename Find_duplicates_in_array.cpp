#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
	vector<int> v;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],i,f=0;
        int b[n]={0};
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            b[a[i]]++;
        }
        for(i=0;i<n;i++)
        {
            if(b[i]>1)
            {
                cout<<i<<" ";
                f=1;
            }
        }
        if(f==0)
            cout<<"-1\n";
    }
    return 0;
}