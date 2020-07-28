#include<bits/stdc++.h>
using namespace std;

int solve (int n, string s) 
{
    unordered_map<char,int> ump;
    long int k=1,i,j,len=s.length(),c=0;
    for(k=1;k<=len;k++)
    {
        i=0,j=i+k-1;
        ump['a']=0;ump['c']=0;ump['b']=0;
        for(int l=i;l<=j;l++)
            ump[s[l]]++;
        while(j<len)
        {
            if(i==0)
            {
                if(ump['a']>ump['c'])
                    c++;
            }
            else
            {
                ump[s[i-1]]--;
                ump[s[j]]++;
                if(ump['a']>ump['c'])
                    c++;
            }
            i++;
            j++;
        }
    }
    return c;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    string s;
    cin>>s;

    int out_;
    out_ = solve(n, s);
    cout << out_;
}