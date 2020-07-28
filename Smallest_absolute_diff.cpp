#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        int a[n];
        map<int,int>m;
        for(int i=0;i<n;i++)
        cin>>a[i];
        cin>>k;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                m[abs(a[i]-a[j])]++;
            }
        }
        int x;
        for(auto it=m.begin();it!=m.end();it++){
            k=k-it->second;
            if(k<=0){
                x=it->first;
                break;
            }
        }
        cout<<x<<endl;
        
    }
	//code
	return 0;
}