#include <bits/stdc++.h>
using namespace std;

int vertex;
int edge;
int st;
bool vis[1005];
vector <int> adj[1005];

void bfs(int st) {
	queue <int> Q;
	Q.push(st);
	vis[st] = true;
	while (!Q.empty()) {
		int cur = Q.front();
		Q.pop();
		cout << cur << ' ';
		for (auto nxt : adj[cur]) {
			if (vis[nxt]) continue;
			Q.push(nxt);
			vis[nxt] = true;
		}
	}
}

void dfs(int st) {
	stack <int> S;
	S.push(st);
	vis[st] = true;
	while (!S.empty()) {
		int cur = S.top();
		S.pop();
		cout << cur << ' ';
		for (auto nxt : adj[cur]) {
			if (vis[nxt]) continue;
			S.push(nxt);
			vis[nxt] = true;
		}
	}
}

/* 재귀 */ 
void dfs2(int st) {
	vis[st] = true;
	cout << st << ' ';
	for (auto nxt : adj[st]) {
		if (vis[nxt]) continue;
		dfs2(nxt);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> vertex >> edge >> st;
	for (int i = 0; i < edge; i++) {
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	for (int i = 1; i <= vertex; i++) {
		sort(adj[i].begin(), adj[i].end());
	}
	dfs2(st);
	fill(vis, vis + vertex + 1, false);
	cout << '\n';
	bfs(st);
}