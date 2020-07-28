#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        int len1,len2;
        cin>>len1>>len2;
        char s1[len1],s2[len2];
        for(int i=0;i<len1;i++)
            cin>>s1[i];
        for(int i=0;i<len2;i++)
            cin>>s2[i];
        int LCS[len1+1][len2+1];
        int res=0,i,j;
        for(i=0;i<=len1;i++)
        {
            for(j=0;j<=len2;j++)
            {
                if(i==0 || j==0)
                    LCS[i][j]=0;
                else if(s1[i-1] == s2[j-1])
                {
                    LCS[i][j]=LCS[i-1][j-1]+1;
                    res=max(res,LCS[i][j]);
                }
                else
                    LCS[i][j]=0;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}