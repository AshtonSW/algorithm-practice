#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define X first
#define Y second
#define INF 1e9
#define pb push_back

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int n, m, u, v, ans;
int min_sum = INF;
int dist[102];
vector<int> adj[102];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    while(m--) {
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    for(int i = 1; i <=n ; i++){
        fill(dist, dist + (n + 1), -1);
        queue<int> q;
        int sum = 0;
        q.push(i);
        dist[i] = 0;
        while(!q.empty()) {
            auto cur = q.front(); q.pop();
            for(int nxt: adj[cur]){
                if(dist[nxt] != -1) continue;
                dist[nxt] = dist[cur] + 1;
                sum += dist[nxt];
                q.push(nxt);
            }
        }
        if(sum < min_sum) {
            min_sum = sum;
            ans = i;
        }
    }
    cout << ans;
}
