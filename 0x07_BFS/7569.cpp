// Authored by : AshtonSW
// https://www.acmicpc.net/problem/7569

#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
#define Z third

int N, M, H;
int board[103][103][103];
int dist[103][103][103];
int dx[6] = { 1, 0, 0, -1, 0, 0 };
int dy[6] = { 0, 1, 0, 0, -1, 0 };
int dz[6] = { 0, 0, 1, 0, 0, -1 };

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	queue <tuple<int, int, int>> Q;
	cin >> M >> N >> H;
	for (int k = 0; k < H; k++) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				cin >> board[i][j][k];
				if (board[i][j][k] == 1) {
					Q.push({ i,j, k });
				}
				if (board[i][j][k] == 0) dist[i][j][k] = -1;
			}
		}
	}
	while (!Q.empty()) {
		tuple<int, int, int> cur = Q.front(); Q.pop(); \
			for (int dir = 0; dir < 6; dir++) {
				int nx = get<0>(cur) + dx[dir];
				int ny = get<1>(cur) + dy[dir];
				int nz = get<2>(cur) + dz[dir];
				if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
				if (dist[nx][ny][nz] >= 0) continue;
				dist[nx][ny][nz] = dist[get<0>(cur)][get<1>(cur)][get<2>(cur)] + 1;
				Q.push({ nx, ny, nz });
			}
	}

	int mx = 0;
	for (int k = 0; k < H; k++) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (dist[i][j][k] == -1) {
					cout << "-1";
					return 0;
				}
				else mx = max(mx, dist[i][j][k]);
			}
		}
	}
	cout << mx;

}