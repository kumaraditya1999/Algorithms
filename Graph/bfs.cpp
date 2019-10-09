#include <bits/stdc++.h>

using namespace std;

const int N = 1000;

int vis[N],par[N];
vector<int>adj[N];

void bfs(int node, int part){
    
    queue<int>q;

    while(!q.empty()){
        int curr = q.front();
        
        for(auto nxt: adj[node]){
            if(!vis[nxt]){
                par[nxt] = curr;
                q.push(nxt);
            }
        }

        vis[curr] = 1;
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

    bfs(1,0);

    // do what ever you want after the traversal

}