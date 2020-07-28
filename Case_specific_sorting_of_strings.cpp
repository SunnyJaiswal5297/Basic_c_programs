// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

string caseSort(string str, int n)
{
    string lower="",upper="";
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='a' && str[i]<='z')
            lower.push_back(str[i]);
        else
            upper.push_back(str[i]);
    }
    
    if(lower.length()==0)
    {
        sort(upper.begin(),upper.end());
        return upper;
    }
    if(upper.length()==0)
    {
        sort(lower.begin(),lower.end());
        return lower;
    }
    sort(lower.begin(),lower.end());
    sort(upper.begin(),upper.end());
    string res="";
    int j=0,k=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='a' && str[i]<='z')
            res=res+lower[j++];
        else
            res=res+upper[k++];
    }
    return res;
}

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		
		cout<<caseSort (str, n)<<endl;
	}
}  // } Driver Code Ends