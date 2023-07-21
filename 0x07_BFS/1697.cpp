// Authored by : AshtonSW
// https://www.acmicpc.net/problem/1697

#include <bits/stdc++.h>
using namespace std;

int N, K;
int dist[100002];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N >> K;
	fill(dist, dist + 100001, -1);
	dist[N] = 0;
	queue<int> Q;
	Q.push(N);
	while (dist[K] == -1) {
		int cur = Q.front(); Q.pop();
		for (int nx : {cur - 1, cur + 1, cur * 2}) {
			if (nx < 0 || nx > 100000) continue;
			if (dist[nx] != -1) continue;
			dist[nx] = dist[cur] + 1;
			Q.push(nx);
		}
	}
	cout << dist[K];
}