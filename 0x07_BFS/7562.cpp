// Authored by : AshtonSW
// https://www.acmicpc.net/problem/7562

#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int N;
int dist[301][301];
int dx[8] = { 2, 2, -2, -2, -1,-1,1,1 };
int dy[8] = { 1, -1, 1,-1,2,-2,2,-2 };


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	while (N--) {
		queue <pair<int, int>> Q;
		int k;
		cin >> k;
		int a, b, c, d;
		cin >> a >> b;
		cin >> c >> d;
		for (int i = 0; i < k; i++) {
			fill(dist[i], dist[i] + k, -1);
		}
		dist[a][b] = 0;
		Q.push({ a,b });
		while (!Q.empty()) {
			auto cur = Q.front(); Q.pop();
			for (int dir = 0; dir < 8; dir++) {
				int nx = cur.X + dx[dir];
				int ny = cur.Y + dy[dir];
				if (nx < 0 || nx >= k || ny < 0 || ny >= k) continue;
				if (dist[nx][ny] != -1) continue;
				dist[nx][ny] = dist[cur.X][cur.Y] + 1;
				Q.push({ nx, ny });
			}
		}
		cout << dist[c][d] << '\n';
	}

}