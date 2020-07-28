#include <bits/stdc++.h>
using namespace std;

long long int fact(long long int)
{
    long long int res=1;
    for(long long int i=2;i<=res;i++)
        res=res*i;
    return res;
}
int main() 
{
	long long int n;
    cin>>n;
    long long int a[n],i,count=0;
    unordered_map<long long int,long long int> ump;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        ump[a[i]]++;
    }
    for(auto it=ump.begin();it!=ump.end();++it)
    {
        if(it->second>=3)
        {
            if(it->second==3)
            {
                count=(count+1)%1000000007;
                cout<<count<<endl;
            }
            else
            {
                for(long long int i=3;i<=it->second;i++)
                    count+=(fact(it->second)/(fact(it->second-i)*fact(i)))%1000000007;
                cout<<count<<endl;
            }
        }
    }
    cout<<count<<endl;
	return 0;
}