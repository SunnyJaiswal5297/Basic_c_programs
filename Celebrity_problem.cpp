// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 501

int getId(int M[MAX][MAX],int n);

int main()
{
    int T;
    cin>>T;
    int M[MAX][MAX];
    while(T--)
    {
        int N;
        cin>>N;
        memset(M,0,sizeof M);
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                cin>>M[i][j];
            }
        }
        cout<<getId(M,N)<<endl;

    }
}

// } Driver Code Ends
// The task is to complete this function

// M[][]: input matrix
// n: size of matrix (n*n)
int getId(int M[MAX][MAX], int n)
{
    stack<int> stk;
    for(int i=n-1;i>=0;i--)
        stk.push(i);
    int a=stk.top();
    stk.pop();
    int b=stk.top();
    stk.pop();
    while(!stk.empty())
    {
        if(M[a][b] == 1)
        {
            a=stk.top();
            stk.pop();
        }
        else if(M[a][b] == 0)
        {
            b=stk.top();
            stk.pop();
        }
    }
    int celeb;
    if(M[a][b])
        celeb=b;
    else
        celeb=a;
    for(int i=0;i<n;i++)
    {
        if(i!=celeb && M[celeb][i])
            return -1;
    }
    return celeb;
}