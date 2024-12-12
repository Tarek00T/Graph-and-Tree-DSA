#include<bits/stdc++.h>
using namespace std;
const int mx=1e5+123;
vector<pair<int,int>>adj[mx];
int32_t main()
{
    int node,edge;
    cin >>node>>edge;
    for(int i=1; i<=edge; i++)
    {
        int u,v,w;
        cin >>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});

    }
    for(int i=1; i<=node; i++)
    {
        cout<<"Adjacent of list"<<' '<< i <<": ";
        for(auto p:adj[i])
        {
            cout<<p.first <<" and " <<' '<<"cost : "<< p.second<<' ';
            cout<<endl;
        }

    }
}

//
//8 7
//8 2 10
//1 4 20
//2 3 6
//3 5 8
//6 8 2
//3 4 6
//4 11 7


