#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  
using namespace std;
 
const ll inf = 1e17;
const ll N = 1e5+10;
const ll bits = 30;
const ll mod = 998244353;

vector<int>adj[N];
int dist[N],vis[N],indeg[N];

void dfs(int node){
    // cout<<node<<"\n";
    vis[node] = 1;
    for(auto nxt: adj[node]){
        if(!vis[nxt]){
            dfs(nxt);
            
        }

        dist[node] = max(dist[node],1+dist[nxt]);
    }
}


int main(){
    FASTIO;
    int n,m,u,v;
    cin>>n>>m;

    for(int i=0;i<m;i++){
        cin>>u>>v;
        indeg[v]++;
        adj[u].push_back(v);
    }


    for(int i=1;i<=n;i++){
        if(!vis[i]){
            dfs(i);
        }
    }

    int ans = 0;

    for(int i=1;i<=n;i++){
        ans = max(ans,dist[i]);
    }
    cout<<ans<<"\n";
}
