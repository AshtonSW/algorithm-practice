// Authored by : AshtonSW
// https://www.acmicpc.net/problem/10026

#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

char board[101][101];
bool vis[101][101];
int N;
int dx[4] = { 1, 0, 0 ,-1 };
int dy[4] = { 0,1,-1,0 };

void bfs(int i, int j) {
	queue <pair<int, int>> Q;
	Q.push({ i, j });
	vis[i][j] = 1;
	while (!Q.empty()) {
		auto cur = Q.front(); Q.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
			if (vis[nx][ny] == 1 || board[i][j] != board[nx][ny]) continue;
			vis[nx][ny] = 1;
			Q.push({ nx,ny });
		}
	}

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> board[i][j];
		}
	}
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (vis[i][j] == 0) {
				cnt++;
				bfs(i, j);
			}
		}
	}
	cout << cnt << ' ';
	for (int i = 0; i < N; i++) {
		fill(vis[i], vis[i] + N, 0);
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (board[i][j] == 'R') {
				board[i][j] = 'G';
			}
		}
	}
	cnt = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (vis[i][j] == 0) {
				cnt++;
				bfs(i, j);
			}
		}
	}
	cout << cnt;
}