#include <vector>
#include <queue>
#include <array>

using namespace std;

const int inf = 1e9;

struct EdmondKarp {
    vector<int>adj[5000];
    int cap[5000][5000];
    int par[5000];

    int bfs(int s,int t){
        for(int i=0;i<=t;i++){
            par[i] = -1;
        }
        par[s] = -2;
        queue<array<int,2>>q;
        q.push({s,inf});
        while(q.size()){
            int node = q.front()[0];
            int flow = q.front()[1];
            q.pop();
            for(int nxt: adj[node]){
                if(par[nxt]==-1 && cap[node][nxt]>0){
                    par[nxt] = node;
                    int newflow = min(flow,cap[node][nxt]);
                    if(nxt==t) return newflow;
                    q.push({nxt,newflow});
                }
            }
        }
        return 0;
    }

    int maxflow(int s,int t){
        int flow = 0, new_flow;
        while(new_flow = bfs(s,t)){
            int temp = t;
            while(temp!=s){
                // t to par of t
                cap[par[temp]][temp]-=new_flow;
                cap[temp][par[temp]]+=new_flow;
                temp = par[temp];
            }
            flow += new_flow;
        }
        return flow;
    }
};
