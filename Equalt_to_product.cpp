// C++ program to find if there is a pair 
// with given product. 
#include<bits/stdc++.h> 
using namespace std; 

// Returns true if there is a pair in arr[0..n-1] 
// with product equal to x. 
bool isProduct(int arr[], int n, int x) 
{ 
	if (n < 2) 
		return false; 

	// Create an empty set and insert first 
	// element into it 
	unordered_set<int> s; 

	// Traverse remaining elements 
	for (int i=0; i<n; i++) 
	{ 
		// 0 case must be handles explicitly as 
		// x % 0 is undefined behaviour in C++ 
		if (arr[i] == 0) 
		{ 
		if (x == 0) 
			return true; 
		else
			continue; 
		} 

		// x/arr[i] exists in hash, then we 
		// found a pair 
		if (x%arr[i] == 0) 
		{ 
			if (s.find(x/arr[i]) != s.end()) 
			return true; 

			// Insert arr[i] 
			s.insert(arr[i]); 
		} 
	} 
	return false; 
} 

// Driver code 
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a
	int arr[] = {10, 20, 9, 40}; 
	int x = 400; 

	int n = sizeof(arr)/sizeof(arr[0]); 
	isProduct(arr, n, x)? cout << "Yes\n"
					: cout << "Non"; 

	x = 190; 
	isProduct(arr, n, x)? cout << "Yes\n"
						: cout << "Non"; 

	return 0; 
} 
