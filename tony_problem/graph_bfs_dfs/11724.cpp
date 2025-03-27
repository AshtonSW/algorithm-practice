#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define X first
#define Y second
#define pb push_back
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int n, m;
int u, v;
vector<int> adj[1002];
bool vis[1002];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    int num = 0;
    for(int i = 1; i <= n; i++) {
        if(vis[i]) continue;
        num++;
        queue<int> q;
        q.push(i);
        vis[i] = true;
        while(!q.empty()) {
            int cur = q.front();
            q.pop();
            for(auto nxt: adj[cur]){
                if(vis[nxt]) continue;
                q.push(nxt);
                vis[nxt] = true;
            }
        }
    }

    cout << num;
    return 0;
}
