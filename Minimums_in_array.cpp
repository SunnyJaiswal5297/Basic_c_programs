#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> a,pair<int,int> b)
{
    return a.first<b.first;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int n;
        cin>>n;
        int i,num,f=0;
        vector<pair<int,int>> v1,v2;
        for(i=0;i<n;i++)
        {
            cin>>num;
            v1.push_back(make_pair(num,i));
        }
        for(i=0;i<n;i++)
        {
            cin>>num;
            v2.push_back(make_pair(num,i));
        }
        if(n==1)
            cout<<"-1\n";
        else
        {
            sort(v1.begin(),v1.end(),comp);
            sort(v2.begin(),v2.end(),comp);
            for(auto x:v1)
                cout<<x.first<<" "<<x.second<<"\n";
            for(auto x:v2)
                cout<<x.first<<" "<<x.second<<"\n";
            for(auto it1=v1.begin(),it2=v2.begin();it1!=v1.end(),it2!=v2.end();)
            {
                if(it1->second!=it2->second)
                {
                    cout<<it1->first+it2->first<<endl;
                    f=1;
                    break;
                }
                if((it1+1)->first<(it2+1)->first)
                    it1++;
                else if((it1+1)->first>(it2+1)->first)
                    it2++;
                else 
                    it2++;
            }
            if(f==0)
                cout<<"-1\n";
        }
    }
	return 0;
}