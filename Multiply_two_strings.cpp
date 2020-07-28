#include<bits/stdc++.h>
using namespace std;
 
void multiplyStrings(string , string );
 
int main() {
     
    int t;
    cin>>t;
    while(t--)
    {
    	string a;
    	string b;
    	cin>>a>>b;
    	multiplyStrings(a,b);
    }
     
}
void multiplyStrings(string s1, string s2) 
{
    int s1_flag=0,s2_flag=0;
    if(s1[0]=='-')
    {
        s1.erase(s1.begin());
        s1_flag=1;
    }
    if(s2[0]=='-')
    {
        s2.erase(s2.begin());
        s2_flag=1;
    }
    int len1=s1.length();
    int len2=s2.length();
    vector<int> res(len1+len2,0);
    int s=0,e=0,i,j;
    for(i=len1-1;i>=0;i--)
    {
        int carry=0;
        e=0;
        int a=s1[i]-'0';
        for(j=len2-1;j>=0;j--)
        {
            int b=s2[j]-'0';
            int sum=a*b+res[s+e]+carry;
            carry=sum/10;
            res[s+e]=sum%10;
            e++;
        }
        if(carry>0)
            res[s+e]+=carry;
        s++;
    }
    string str={};
    int flag=0;
    for(i=res.size()-1;i>=0;i--)
    {
        if(res[i]==0 && flag==0)
            continue;
        else
        {
            str=to_string(res[i])+str;
            flag=1;
        }
    }
    if(s1_flag!=s2_flag)
        str=str+'-';
    reverse(str.begin(),str.end());
    cout<<str<<endl;
}
