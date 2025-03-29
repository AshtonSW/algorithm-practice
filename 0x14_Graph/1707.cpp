#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define X first
#define Y second
#define INF 1e9
#define pb push_back

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

vector<int> adj[20002];
int t;
int color[20002];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> t;
    while(t--){
        int V, E, u, v;
        queue<int> q;
        bool vis[20002];
        bool isBipartite = true;
        cin >> V >> E;
        for(int i = 1; i <= V; i++) {
            adj[i].clear();
            color[i] = 0;
            vis[i] = false;
        }
        for(int i = 0; i < E; i++){
            cin >> u >> v;
            adj[u].pb(v);
            adj[v].pb(u);
        }
        for(int i = 1; i <= V; i++){
            if(!vis[i]) {
                queue<int> q;
                q.push(i);
                vis[i] = true;
                color[i] = 1;
                while(!q.empty()){
                    int cur = q.front(); q.pop();
                    for(auto nxt : adj[cur]){
                        if (vis[nxt]){
                            if(color[nxt] == color[cur]){
                                isBipartite = false;
                                break;
                            }   
                            continue;
                        }
                        vis[nxt] = true;
                        color[nxt] = -color[cur];
                        q.push(nxt);
                    }
                    if(!isBipartite) break;
                }
            }   
            if(!isBipartite) break;
        }
        cout << (isBipartite ? "YES\n" : "NO\n" );
    }
    return 0;
}
            