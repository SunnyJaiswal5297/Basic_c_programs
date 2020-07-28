#include<bits/stdc++.h>
using namespace std;

struct point
{
    int x;
    int y;
};
struct node
{
    point p;
    int d;
};
bool valid(int row,int col,int n,int m)
{
    if(row>=0 && col>=0 && row<=n-1 && col<=m-1)
        return true;
    else
        return false;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int row,col;
        cin>>row>>col;
        int a[row][col],i,j;
        for(i=0;i<row;i++)
            for(j=0;j<col;j++)
                cin>>a[i][j];
        int x1,y1;
        cin>>x1>>y1;
        queue<node> q;
        point src={0,0};
        point des={x1,y1};
        node s={src,0} //initialize distance as 0;
        q.push(s);
        int dis=0;
        int row_index[]={-1,0,0,1};
        int col_index[]={0,-1,1,0};
        bool visited[row][col];
        memset(visited,false,sizeof visited);
        visited[src.x][src.y]=1;
        while(!q.empty())
        {
            node curr=q.front();
            if(curr.p.x==des.x && curr.p.y==des.y)
            {
                dis=curr.d;
                break;
            }
            q.pop();
            for(i=0;i<4;i++)
            {
                int row=curr.p.x+row_index[i];
                int col=curr.p.y+col_index[i];

            }
        }
    }
    return 0;
}