#include<bits/stdc++.h>
using namespace std;
const int mx=1e5+123;
int vis[mx];
vector<int>adj[mx];
void dfs(int u)
{
    vis[u]=1;
    for(auto v:adj[u])
    {
        if(vis[v]==0)
        {
            dfs(v);
        }
    }
}
int main()
{
    int node,edge;
    cin >>node>>edge;
    for(int i=1; i<=edge; i++)
    {
        int u,v;
        cin >>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int cnt=0;
    for(int i=1; i<=node; i++)
    {
        if(vis[i]==0)
        {
            dfs(i);
            {
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;

}
//inp
//8 5
//1 2
//2 3
//2 4
//3 5
//6 7
//output
//3
