#include <bits/stdc++.h> 
using namespace std;
vector<int> SortBinaryArray(vector<int> binArray);

vector<int> SortBinaryArray(vector<int> a)
{
    int j=-1;
    for(int i=0;i<a.size()-1;i++)
    {
        if(a[i]<1)
        {
            j++;
            swap(a[i],a[j]);
        }
    }
    return a;
}



int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int> binArray(n);
	    
	    for(int i = 0; i  < n; i++)
	      cin>>binArray[i];
	      
	  	vector<int> result = SortBinaryArray(binArray);
	  	for(int i=0; i<n; i++)
	  	    cout<<result[i]<<" ";
	      
	    cout<<endl;
	}
	return 0;
}
