#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007


int main()
 {
	int t ;
	cin >> t ;
	while(t--)
    {
	    long long int n , i , sum = 0 , inc = 0 , dec = 0 , mx = 0 ;
	    cin >> n ;
	    long long int a[n] ;
	    for(i=0;i<n;i++)
        {
	        cin >> a[i] ;
	    }
	    sum = a[0] ;
	    mx = a[0] ;
	    for(i=1;i<n;i++)
        {
	        if(a[i] < a[i-1])
            {
	            dec = 1 ;
	            sum += a[i] ;
	        }
	        else if(a[i] > a[i-1])
            {
	            inc = 1 ;
	            if(dec == 1)
                {
	                mx = max(mx , sum) ;
	                sum = a[i-1]+a[i] ;
	                dec = 0 ;
	            }
	            else
                {
	                sum += a[i] ;
	            }
	        }
	        else
            {
	            sum = a[i] ;
	            inc = 0 ;
	            dec = 0 ;
	        }
	        mx = max(sum , mx) ;
	    }
	   // mx = max(sum , mx) ;
	    cout << mx << endl ;
	}
	
	return 0;
}
