#include<bits/stdc++.h>
using namespace std;

long long solve (long long K, long long N) 
{
    long long dist[N+1]={0};
    dist[0]=1;
    for(int i=1;i<=K;i++)
    {
        for(int j=0;j<=N;j++)
        {
            if(j>=i)
                dist[j]+=dist[j-i];
        }
        for(int i=0;i<=N;i++)
            cout<<dist[i]<<" ";
        cout<<endl;
    }
    return dist[N];
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i=0; t_i<T; t_i++)
    {
        long long N;
        cin >> N;
        long long K;
        cin >> K;

        long long out_;
        out_ = solve(K, N);
        cout << out_;
        cout << "\n";
    }
}