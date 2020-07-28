#include <bits/stdc++.h>
using namespace std;
int a[1000000];

bool comp(pair<int,int> const a,pair<int,int> const b)
{
    if(a.second==b.second)
        return a.first<b.first;
    else
        return a.second>b.second;
}

void sortByFreq(int arr[],int n);
int main() 
{	
	int t;
	cin >> t;
	while(t--)
    {    
	    int n;
	    cin >> n;   
	    for(int i = 0;i<n;i++)
	        cin >> a[i];
	    sortByFreq(a,n);
	    cout << endl;
	}
	return 0;
}
void sortByFreq(int arr[],int n)
{
    int i;
    unordered_map<int,int> m;
    for(i=0;i<n;i++)
        m[a[i]]++;
    vector<pair<int,int>> vec;
    for(auto it=m.begin();it!=m.end();++it)
        vec.push_back(make_pair(it->first,it->second));
    sort(vec.begin(),vec.end(),comp);
    for(auto it=vec.begin();it!=vec.end();++it)
    {
        int k=it->second;
        while(k--)
            cout<<it->first<<" ";
    }
}