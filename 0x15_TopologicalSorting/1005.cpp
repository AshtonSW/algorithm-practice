#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define X first
#define Y second

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--) {
        vector <int> adj[1005] = {};
        queue <int> Q = {};
        int deg[1005] = {};
        int bt[1005] = {}; // buildTime
        int ans[1005] = {};
        int n, m;
        cin >> n >> m;
        for (int i = 1; i <= n; i++) {
            cin >> bt[i];
        }
        while (m--) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            deg[v]++;
        }

        int bnum; // 건설해야할 최종 빌딩 번호
        cin >> bnum;

        for (int i = 1; i <= n; i++) {
            if (deg[i] == 0) Q.push(i);
        }

        while (!Q.empty()) {
            auto cur = Q.front(); Q.pop();
            for (int nxt : adj[cur]) {
                ans[nxt] = max(ans[nxt], bt[cur] + ans[cur]);
                deg[nxt]--;
                if (deg[nxt] == 0) Q.push(nxt);
            }
        }
        cout << ans[bnum] + bt[bnum] << '\n';
    }
}
