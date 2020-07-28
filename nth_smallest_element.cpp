#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Find K'th smallest element in an array
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        int k,n,temp,count=0;
        cin>>n;
	    vector<int> a;
        while(cin>>temp && count!=n-1)
        {
            a.push_back(temp);
            count++;
        }
        cin>>k;
	    nth_element(a.begin(), a.begin() + k , a.end());
	    cout<< a[k-1]<<"\n";
        t--;
    }
    return 0;
}