// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

#define N 105

void transpose( int A[][N],int n) 
{ 
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            swap(A[i][j],A[j][i]);
}

int main() 
{ 
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n;
	    cin >> n;
	    int A[N][N];
	    for(int i = 0;i<n;i++){
	        for(int j = 0;j<n;j++){
	            cin >> A[i][j];
	        }
	    }
	    
	    transpose(A, n);
	    
	    for (int i = 0; i < n; i++) 
    	{ 
    		for (int j = 0; j < n; j++) 
    		printf("%d ", A[i][j]); 
    	
    	}
    	cout<<endl;
	    
	}

	return 0; 
} 
  // } Driver Code Ends