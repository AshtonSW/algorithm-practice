#include <bits/stdc++.h>
using namespace std;

int vertex;
int edge;
bool vis[505];
vector <int> adj[505];

void bfs() {
	int cnt = 0;
	queue <int> Q;
	Q.push(1);
	vis[1] = true;
	while (!Q.empty()) {
		int cur = Q.front();
		Q.pop();
		for (auto nxt : adj[cur]) {
			if (vis[nxt]) continue;
			vis[nxt] = true;
			cnt++;
			if (cur == 1) Q.push(nxt);
		}
	}
	cout << cnt;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> vertex >> edge;
	for (int i = 0; i < edge; i++) {
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	bfs();
}