#include <bits/stdc++.h>

using namespace std;

void toposort(){
    int n;
    vector<vector<int>>adj(n+1);
    vector<int>indeg(n+1,0),pos(n+1,0);

    int ptr=0;
    queue<int>q;

    for(int i=1;i<=n;i++){
        if(!indeg[i]){
            q.push(i);
        }
    }

    while(q.size()){
        int node = q.front(); q.pop();
        pos[node] = ++ptr;
        
        for(int nxt: adj[node]){
            indeg[nxt]--;
            if(!indeg[nxt]) q.push(nxt);
        }
    }

    if(ptr==n){
        // topological sort exists
    }else{
        // cycle exists
    }

}