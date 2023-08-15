#include <bits/stdc++.h>
using namespace std;

vector<int> adj[32005];
int deg[32005];
int n, m;
priority_queue <int, vector<int>, greater<int>> PQ;

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

	
	for (int i = 1; i <= n; i++) {
		if (deg[i] == 0) PQ.push(i);
	}
	while (!PQ.empty()) {
		auto cur = PQ.top(); PQ.pop();
		cout << cur << ' ';
		for (int nxt : adj[cur]) {
			deg[nxt]--;
			if (deg[nxt] == 0) PQ.push(nxt);
		}
	}
}
