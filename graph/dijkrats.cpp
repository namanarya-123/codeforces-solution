#include<bits/stdc++.h>
using namespace std;

vector<int>dij(int v,vector<vector<pair<int, int>>>&adj, int s)
{
    vector<int>dist(v, INT_MAX);
    vector<bool>exp(v, 0);

    priority_queue<
        pair<int,int>,
        vector<pair<int,int>>,
        greater<pair<int,int>>
    > p;

    dist[s] = 0;
    p.push({0,s});

    while(!p.empty())
    {
        int node = p.top().second;
        p.pop();

        if(exp[node] == 1)
        continue;

        exp[node] = 1;

        for(int i=0; i<adj[node].size(); i++)
        {
            int n = adj[node][i].first;
            int w = adj[node][i].second;

            if(!exp[n] && dist[node]+w<dist[n])
            {
                dist[n] = dist[node]+w;

                p.push({dist[n] , n});
            }
        }
    }

    return dist;

}

int main()
{
    int v, e;
    cin>>v>>e;

    vector<vector<pair<int , int>>>adj(v);

    for(int i=0; i<e; i++)
    {
        int u, vt, w;
        cin>>u>> vt>> w;

        adj[u].push_back({vt, w});
        adj[vt].push_back({u, w});
    }

    int source;
    cin>>source;

    vector<int>dij1 = dij(v, adj, source);

    for(int i=0; i<v; i++)
    {
        cout<<dij1[i]<<" ";
    }
}