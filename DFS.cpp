// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


/* Function to do DFS of graph

g : adjacency list of graph
N : number of vertices

return a list containing the DFS traversal of the given graph
*/
void DFSutil(int s,vector<int> *g,vector<int> &res,int v[])
{
    v[s]=true;
    res.push_back(s);
    for(auto x:g[s])
    {
        if(!v[x])
            DFSutil(x,g,res,v);
    }
}

vector <int> dfs(vector<int> g[], int N)
{
    int visited[N]={false};
    vector<int> res;
    DFSutil(0,g,res,visited);
    return res;
}

// { Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {

        int N, E;
        cin>>N>>E;
        
        vector<int> g[N];
        bool vis[N];
        
        memset(vis, false, sizeof(vis));
        
        for(int i=0;i<E;i++)
        {
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }

        vector <int> res = dfs(g, N);
        for (int i = 0; i < res.size (); i++)
            cout << res[i] << " ";
        cout<<endl;

    }
}  // } Driver Code Ends