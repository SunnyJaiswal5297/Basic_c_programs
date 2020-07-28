#include<bits/stdc++.h>
using namespace std;

bool interleaving_strings(char *a,char *b,char *c)
{
    if(!(*a || *b || *c))
        return true;
    if(*c=='\0')
        return false;
    return ((*c==*a && interleaving_strings(a+1,b,c+1)) || (*c=*b && interleaving_strings(a,b+1,c+1)));
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b,c;
        cin>>a;
        cin>>b;
        cin>>c;
        if(a.length()+b.length()!=c.length())
            cout<<"0\n";
        else
            cout<<interleaving_strings(&a[0],&b[0],&c[0])<<endl;
    }
    return 0;
}
/*A="aabcc"
    B = "dbbca"
    C = "aadbbcbcac"*/