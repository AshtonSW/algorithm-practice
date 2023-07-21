// Authored by : AshtonSW
// https://www.acmicpc.net/problem/1012

#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int T, M, N, K;
int board[51][51];
bool vis[51][51];
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };
int num;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> T;
	while (T--) {
		cin >> M >> N >> K;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				board[i][j] = 0;
				vis[i][j] = 0;
			}
		}

		for (int i = 0; i < K; i++) {
			int a, b;
			cin >> a >> b;
			board[b][a] = 1;
		}
		int num = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (board[i][j] == 0 || vis[i][j]) continue;
				num++;
				queue <pair<int, int>> Q;
				vis[i][j] == 1;
				Q.push({ i,j });
				while (!Q.empty()) {
					auto cur = Q.front(); Q.pop();
					for (int k = 0; k < 4; k++) {
						int nx = cur.X + dx[k];
						int ny = cur.Y + dy[k];
						if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
						if (vis[nx][ny] == 1 || board[nx][ny] != 1)continue;
						vis[nx][ny] = 1;
						Q.push({ nx, ny });
					}
				}
			}
		}
		cout << num << '\n';

	}

}