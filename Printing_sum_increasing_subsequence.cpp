#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],b[n],i,j;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        int max=INT_MIN;
        vector<int> vec,res;
        for(i=1;i<n;i++)
        {
            vec={};
            for(j=0;j<i;j++)
            {
                if(a[i]>a[j] && b[i]<a[i]+b[j])
                {
                    b[i]=a[i]+b[j];
                    vec.push_back(a[j]);
                }
            }
            vec.push_back(a[i]);
            //cout<<str<<endl;
            if(b[i]>max)
            {
                max=b[i];
                res=vec;
            }
            else if(b[i]==max)
            {
                if(vec.size()<res.size())
                    res=vec;
            }
        }
        /*for(i=0;i<n;i++)
            cout<<b[i]<<" ";*/
        for(i=0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
    }
    return 0;
}