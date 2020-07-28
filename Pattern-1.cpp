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
        char k=65;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==0 || i==n-1)
                {
                    cout<<k;
                    k++;;
                }
                else
                {
                    if(j==0 || j==n-1)
                    {
                        cout<<k;
                        k++;
                    }
                    else
                    {
                        cout<<"$";
                    }
                }
            }
            cout<<"\n";
        }
    }
    return 0;
}