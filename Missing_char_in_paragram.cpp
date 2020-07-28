#include<bits/stdc++.h>
using namespace std;

string missingPanagram(string str);
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;	
	cout<<missingPanagram(s);
	}
	return 0;
}

string missingPanagram(string str)
{
    int arr[256],i;
    string res={};
    memset(arr,0,sizeof(arr));
    for(i=0;i<str.length();i++)
    {
        char ch=tolower(str[i]);
        arr[ch]++;
    }
    for(i=97;i<=122;i++)
        if(arr[i]==0)
            res+=char(i);
    return res;
}
//cehlntuvwy
