#include <bits/stdc++.h>
using namespace std;

vector<int> adj[32005];
int deg[32005];
int n, m;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> m;
	while (m--) {
		int a, b;
		cin >> a >> b;
		adj[a].push_back(b);
		deg[b]++;
	}
	queue<int> Q;
	for (int i = 1; i <= n; i++) {
		if (deg[i] == 0) Q.push(i);
	}
	while (!Q.empty()) {
		int cur = Q.front(); Q.pop();
		cout << cur << ' ';
		for (int nxt : adj[cur]) {
			deg[nxt]--;
			if (deg[nxt] == 0) Q.push(nxt);
		}
	}
}
