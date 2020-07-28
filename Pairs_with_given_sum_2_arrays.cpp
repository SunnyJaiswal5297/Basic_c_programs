#include <bits/stdc++.h> 
using namespace std; 

void findPairs(int arr1[], int arr2[], int n, int m, int x) 
{  
	unordered_set<int> s; 
	for (int i = 0; i < n; i++) 
		s.insert(arr1[i]); 

	for (int j = 0; j < m; j++) 
		if (s.find(x - arr2[j]) != s.end()) 
			cout <<x - arr2[j] <<" "<< arr2[j]<<", "; 
} 

// Driver code 
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x;
        cin>>n>>m>>x;
        int arr1[n],arr2[m],i;
        for(i=0;i<n;i++)
            cin>>arr1[i];
        for(i=0;i<m;i++)
            cin>>arr2[i];
        findPairs(arr1, arr2, n, m, x); 
    }  
	return 0; 
} 
