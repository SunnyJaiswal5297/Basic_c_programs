#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec={30,40,20,56,28};
    sort(vec.begin(),vec.end());
    cout<<*(lower_bound(vec.begin(),vec.end(),31));
}