#include<bits/stdc++.h>
using namespace std;
bool is_prime(int num)
{
    if(num==1)
        return false;
    for(int i=2;i<=num/2;i++)
        if(num%i==0)
            return false;
    return true;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int n,k,i;
        cin>>n>>k;
        int num;
        map<int,int> m;
        for(i=0;i<n;i++)
        {
            cin>>num;
            m[num]++;
        }
        for(auto it=m.begin();it!=m.end();++it)
        {
            if(it->second<k)
                m.erase(it);
        }
        for(auto it=m.begin();it!=m.end();++it)
        {
            if(is_prime(it->second))
                cout<<it->first<<" ";
        }
        cout<<endl;
    }
	return 0;
}