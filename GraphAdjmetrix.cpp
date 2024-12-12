#include<bits/stdc++.h>
using namespace std;
const int mx=1e5+123;
vector<int>adj[mx];
int32_t main()
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
    for(int i=1; i<=node; i++)
    {
        cout<<"Adjacent of list"<<' '<< i <<": ";
        for(auto u:adj[i])
        {
            cout<<u<<' ';
        }
        cout<<endl;

    }
}

//
//8 7
//8 2
//1 4
//2 3
//3 5
//6 8
//3 4
//4 11

