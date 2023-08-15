#include <bits/stdc++.h>
using namespace std;

vector<int> adj[1005];
int deg[1005];
int n, m, snum;
int arr[1005];
vector <int> v;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> m;
	int no;
	while (m--) {
		cin >> snum;
		if (snum == 0) continue;
		for (int i = 0; i < snum; i++) {
			cin >> arr[i];
			if (i > 0) {
				adj[arr[i-1]].push_back(arr[i]);
				deg[arr[i]]++;
			}
		}
	}
	queue<int> Q;
	for (int i = 1; i <= n; i++) {
		if (deg[i] == 0) Q.push(i);
	}
	while (!Q.empty()) {
		int cur = Q.front(); Q.pop();
		v.push_back(cur);
		for (int nxt : adj[cur]) {
			deg[nxt]--;
			if (deg[nxt] == 0) Q.push(nxt);
		}
	}
	if (v.size() != n) cout << 0;
	else for (auto s : v) cout << s << ' ';
}
