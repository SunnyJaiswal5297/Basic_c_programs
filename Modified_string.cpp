// { Driver Code Starts
#include<bits/stdc++.h>
#define br char xx; cin>>xx; cout<<xx<<endl;
#define lli long long int
using namespace std;


 // } Driver Code Ends


int modified (string a)
{
    // Your code here
    int c=1,res=0;
    char ch;
    for(int i=0;i<a.length()-1;i++)
    {
        if(a[i]!=a[i+1])
            c=1;
        else
        {
            ch=a[i];
            c++;
        }
        if(c==3)
        {
            c=1;
            res++;
        }
    }
    return res;
}


int main()
{
    int t;
    cin>>t;
    string a;
    while(t--){
        cin>>a;
        cout<<modified(a)<<endl;
    }
    return 0;
}
  // } Driver Code Ends