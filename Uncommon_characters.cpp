#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1={},s2={},s3={};
        getline(cin,s1);
        getline(cin,s2);
        int len1,len2;
        len1 = s1.length();
        len2 = s2.length();
        int i,j,f,k=0;
        for(i=0;i<len1;i++)
        {
            f=0;
            for(j=0;j<len2;j++)
            {
                if(s1[i]==s2[j])
                {
                    f=-1;
                    break;
                }
                else
                    f=1;
            }
            if(f==1)
            {
                s3+=s1[i];
            }
        }
        sort(s3.begin(),s3.end());
        cout<<s3<<"\n";
        s1.clear();
        s2.clear();
        s3.clear();
    }
    return 0;
}