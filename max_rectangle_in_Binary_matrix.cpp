// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000

int maxArea(int M[MAX][MAX], int n, int m);
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--)
    {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++) 
            {
                cin >> M[i][j];
            }
        }
        cout << maxArea(M, n, m) << endl;
    }
}
int  Maxarea( int  hist[], int n){
    stack< int >st;
     int  i=0;
   int  area=0;
    int  max=0;
    while(i<n){
        if(st.empty()||hist[st.top()] <= hist[i]){
            st.push(i);
            i++;
        }
        else{
            int charmax=st.top();
            st.pop();
            area=hist[charmax]*(st.empty()? i:(i-1-st.top()));
            if(max<=area)
            max=area;
        }
    }
    
        while(!st.empty()){
             int charmax=st.top();
            st.pop();
            area=hist[charmax]*(st.empty()? i:(i-1-st.top()));
            if(max<=area)
            max=area;
        }
    
    
    return max;
    
}
int maxArea(int M[MAX][MAX], int n, int m) 
{
    int flag=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        if(M[i][j]!=0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    return 0;
    int b[m]={0};
    
    int max=-1;
    for(int i=0;i<n;i++){
        
        for(int j=0;j<m;j++){
            if(M[i][j]==0)
            b[j]=0;
            else
        b[j]+=M[i][j];
    }
     int area=Maxarea(b,m);
    if(max<area)
    max=area;
    }
    return max;
    
}