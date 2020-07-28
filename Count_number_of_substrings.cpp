#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,i,j,z;
        cin>>n;
        string str;
        cin>>str;
        //int n=str.size();
        int dp[n][n];
        memset(dp,0,sizeof(dp));
        int count=0;
  //      unordered_map<string,int> m;
        for(i=0;i<n;i++)
            dp[i][i]=1;
        for(i=0;i<n-1;i++){
            if(str[i]==str[i+1]){
                dp[i][i+1]=1;
                count++;
            }
        }
        for(i=3;i<=n;i++){
            for(j=0;j<n-i+1;j++){
                z=j+i-1;
                if(dp[j+1][z-1] && str[j]==str[z]){
                    
                        count++;
                  //  m[str.substr(j,i)]=1;    
                    dp[j][z]=1;
                }
            }
        }
        cout<<count<<endl;
    }
	//code
	return 0;
}