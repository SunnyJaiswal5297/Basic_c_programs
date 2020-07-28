#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r;
        cin>>r;
        int res=4,x;
        for(x=1;x<r;x++)
        {
            int y_sq=r*r-x*x;
            int y=sqrt(y_sq);
            if(y*y==y_sq)
                res+=4;
        }   
        cout<<res<<"\n";
    }
    return 0;
}