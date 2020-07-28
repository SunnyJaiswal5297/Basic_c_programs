#include <bits/stdc++.h>
using namespace std;
int a[1000000];

void sortByFreq(int arr[],int n);
int main() 
{	
	int t;
	cin >> t;
	while(t--)
    {    
	    int n;
	    cin >> n;   
	    for(int i = 0;i<n;i++)
	        cin >> a[i];
	    sortByFreq(a,n);
	    cout << endl;
	}
	
	return 0;
}

// } Driver Code Ends
//Complete this function
//The array is declared globally
void sortByFreq(int arr[],int n)
{
    //Your code here
}