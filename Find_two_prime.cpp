#include<bits/stdc++.h>
using namespace std;

bool check_prime(int num)
{
    int f=0;
    for(int j=2;j<=num/2;j++)
    {
        if(num%j==0)

    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==4)
            cout<<"1 3\n";
        else
        {
            vector<int> v;
            v.push_back(3);
            for(int i=4;i<n;i++)
            {
                if(check_prime(i));
                    v.push_back(i);
            }
        }
    }
    return 0;
}