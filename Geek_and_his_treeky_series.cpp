#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int f=7;
        uint64_t res;
        const unsigned int M=1000000007;
        if(n==1)
            cout<<f<<endl;
        else
        {
            for(int i=1;i<n;i++)
            {
                res=(f*2+i)%M;
                f=res;
            }
        }
        cout<<res<<"\n";
    }
    return 0;
}