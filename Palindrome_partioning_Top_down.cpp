#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str,int i,int j)
{
    while(i<j)
    {
        if(str[i]!=str[j])
            return false;
        i++;j--;
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int n=str.length();
        int c[n];
        bool p[n][n];
        int i,j,l;
        memset(p,0,sizeof(p));
        //initialisation
        for(i=0;i<n;i++)
            p[i][i]=true;  //all strings of length 1 are palindrome.
        for(l=2;l<=n;l++) //length of subtring
        {
            for(i=0;i<n-l+1;i++) //no. of partitions
            {
                j=i+l-1;   //ending index
                if(l==2)
                    p[i][j]=(str[i]==str[j]);
                else
                    p[i][j]=(str[i]==str[j] && p[i+1][j-1]);
            }
        }
        for(i=0;i<n;i++)
        {
            if(p[0][i]==true)
                c[i]=0;
            else
            {
                c[i]=INT_MAX;
                for(j=0;j<i;j++)
                {
                    if(p[j+1][i]==true && 1+c[j]<c[i])
                        c[i]=1+c[j];
                }   
            }
        }
        /*for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                cout<<p[i][j]<<" ";
            cout<<endl;
        }
        cout<<endl;
        for(i=0;i<n;i++)
            cout<<c[i]<<" ";
        cout<<endl;*/
        cout<<c[n-1]<<endl;
    }
    return 0;
}