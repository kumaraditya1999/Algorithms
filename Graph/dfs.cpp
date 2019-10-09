#include <bits/stdc++.h>

using namespace std;

const int N = 1000;

int vis[N],par[N];
vector<int>adj[N];

void dfs(int node, int part){
    par[node] = part;
    vis[node] = 1;

    for(auto nxt: adj[node]){
        if(!vis[nxt]){
            dfs(nxt,node);
        }
    }
}


int main(){

    int n,m,u,v;
    cin>>n>>m;

    for(int i=1;i<=m;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1,0);

    // do what ever you want after the traversal

}