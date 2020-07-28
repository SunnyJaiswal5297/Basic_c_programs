#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;
        int i,num;
        vector<int> vec;
        for(i=0;i<n;i++)
        {
            cin>>num;
            vec.push_back(num);
        }
        cin>>k;
        vector<int>::iterator it;
        for(it=vec.begin();it<=vec.end()-1;it++)
            cout<<*it<<" ";
        nth_element(vec.begin(),vec.begin()+k-1,vec.end());
        cout<<vec[k-1]<<"\n";
    }
    return 0; 
}