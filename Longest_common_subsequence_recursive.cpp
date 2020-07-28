#include<bits/stdc++.h>
using namespace std;

int LCS(string x,string y,int l1,int l2)
{
    //base condition
    if(l1==0 || l2==0)
        return 0;
    //Choice 1
    else if(x[l1-1]==y[l2-1])
    {
        return 1+LCS(x,y,l1-1,l2-1);
    }
    //choice 2
    else
    {
        return max(LCS(x,y,l1-1,l2),LCS(x,y,l1,l2-1));
    }
}
int main()
{
    string x,y;
    cin>>x;
    cin>>y;
    int l1=x.length();
    int l2=y.length();
    int lcs_length=LCS(x,y,l1,l2);
    cout<<lcs_length<<endl;
}

/*string x : abcdgh
string y : abedfhr* ans=4/