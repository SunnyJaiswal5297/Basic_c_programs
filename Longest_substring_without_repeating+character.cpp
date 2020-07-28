#include <bits/stdc++.h>
using namespace std;

int SubsequenceLength(string s);
int SubsequenceLength(string s) 
{
    vector<int> vec(256,-1);
    int res=0,i=0,n=s.length();
    for(int j=0;j<n;j++)
    {
        i=max(i,vec[s[j]]+1);  //storing the starting index
        res=max(res,j-i+1);
        vec[s[j]]=j;
    }
    return res;
}

int main()
{
    int t;
    cin>>t;
    cin>>ws;
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<SubsequenceLength(str)<<"\n";
    }
    return 0;
}
  // } Driver Code Ends