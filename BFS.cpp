#include <bits/stdc++.h>

using namespace std;

vector <int> bfs(vector<int> g[], int N);

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> N >> E;
        vector<int> adj[N];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }
        vector <int> res = bfs(adj, N);
        for (int i = 0; i < res.size (); i++) cout << res[i] << " ";
        cout << endl;
    }
}

vector <int> bfs(vector<int> g[], int N) 
{
    vector<int> res;
    bool visited[N]={false};
    queue<int> q;
    q.push(0);
    visited[0]=true;
    res.push_back(0);
    while(!q.empty())
    {
        int curr=q.front();
        q.pop();
        if(!visited[curr])
        {
            visited[curr]=true;
            res.push_back(curr);
        }
        for(auto x:g[curr])
        {
            if(!visited[x])
                q.push(x);
        }
        for(auto x:res)
            cout<<x<<" ";
        cout<<endl;
    }
    return res;
}