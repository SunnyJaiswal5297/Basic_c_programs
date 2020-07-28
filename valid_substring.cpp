#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        string str;
        cin>>str;
        int left=0,right=0,m=0;
        //iterate from left to right. 
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='(')
                left++;
            else
                right++;
            if(left==right)
                m=max(m,2*left);
            if(right>left)
                left=right=0;
        }
        //iterate from right to left.
        left=right=0;
        for(int i=str.length()-1;i>=0;i--)
        {
            if(str[i]=='(')
                left++;
            else
                right++;
            if(left==right)
                m=max(m,2*left);
            if(left>right)
                right=left=0;
        }
        cout<<m<<endl;
    }
	return 0;
}
/*
))))))()()))(())))())((()()()())(((()))())
*/