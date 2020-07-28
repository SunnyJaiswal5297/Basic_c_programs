#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
    cin.ignore();
	while(t--)
	{
        int n;
        cin>>n;
        vector<string> vec;
        for(int i=0;i<n;i++)
        {
            string str;
            cin>>str;
            vec.push_back(str);
        }
        unordered_map<string,int> ump;
        for(int i=0;i<n;i++)
        {
            ump[vec[i]]++;
        }
        int max=0;
        for(auto x:ump)
        {
            if(x.second>max)
                max=x.second;
        }
        string res={};
        int min_diff=max;
        for(auto x:ump)
        {
            if((max-x.second)<min_diff && x.second!=max)
            {
                min_diff=max-x.second;
                res=x.first;
            }
        }
        cout<<res<<endl;
    }
	return 0;
}