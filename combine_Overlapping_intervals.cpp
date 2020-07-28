#include<bits/stdc++.h>
using namespace std;

void overlappedInterval(vector<pair<int,int>> , int );
bool comp(pair<int,int> a,pair <int,int> b)
{
    if(a.first==b.first)
        return a.first<b.second;
    else
        return a.first<b.first;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<pair<int,int> > arr,res;
        int n,x,y;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x>>y;
            arr.push_back(make_pair(x,y));
        }
        overlappedInterval(arr,n);
        cout<<endl;
    }
}
void overlappedInterval(vector<pair<int,int>> vec, int n) 
{
    sort(vec.begin(),vec.end(),comp);
    for(int i=0;i<vec.size()-1;)
    {
        if(vec[i].second>=vec[i+1].first)
        {
            vec[i].second=vec[i].second>vec[i+1].second?vec[i].second:vec[i+1].second;
            vec.erase(vec.begin()+i+1);
            for(auto it=vec.begin();it!=vec.end();++it)
                cout<<it->first<<" "<<it->second<<"\n";
            cout<<i<<endl;
        }
        else
            i++;
    }
    for(auto it=vec.begin();it!=vec.end();++it)
        cout<<it->first<<" "<<it->second<<"\n";
}