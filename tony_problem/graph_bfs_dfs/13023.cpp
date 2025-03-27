#include <iostream>
#include <queue>
using namespace std;
using ll = long long;
#define X first
#define Y second
#define pb push_back

vector<int> adj[2001];
vector<int> depth;
int u, v;
int n, m;

void dfs(int cur){
    if(depth[cur] == 5){
        cout << 1;
        exit(0);
    }
    for(auto nxt: adj[cur]){
        if(depth[nxt] != -1) continue;
        depth[nxt] = depth[cur] + 1;
        dfs(nxt);
        depth[nxt] = -1;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> m;

    while(m--){
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    for(int i = 0; i < n; i++){
        depth.resize(n);
        fill(depth.begin(), depth.end(), -1);
        depth[i] = 1;
        dfs(i);
    }
    cout << 0;
}
