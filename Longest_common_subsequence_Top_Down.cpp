#include<bits/stdc++.h>
using namespace std;
int t[100][100];

void LCS(string x,string y,int l1,int l2)
{
    //initialisation
    int i,j;
    for(i=0;i<=l1;i++)
        t[i][0]=0;
    for(j=0;j<=l2;j++)
        t[0][j]=0;
    //choice logic
    for(i=1;i<=l1;i++)
    {
        for(j=1;j<=l2;j++)
        {
            if(x[i-1]==y[j-1])
            {
                t[i][j]=1+t[i-1][j-1];
            }
            else
            {
                t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
    }
}
int main()
{
    string x,y;
    cin>>x;
    cin>>y;
    int l1=x.length(),i,j;
    int l2=y.length();
    LCS(x,y,l1,l2);
    for(i=0;i<=l1;i++)
    {
        for(j=0;j<=l2;j++)
            cout<<t[i][j]<<" ";
        cout<<endl;
    }
    cout<<t[l1][l2]<<endl;
}

/*string x : abcdgh
string y : abedfhr ans=4*/