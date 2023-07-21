// Authored by : AshtonSW
// https://www.acmicpc.net/problem/4179

#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int N, M;
string board[1002];
int F_dist[1002][1002];
int JH_dist[1002][1002];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };


int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N >> M;
	queue<pair<int, int>> F_Que;
	queue<pair<int, int>> JH_Que;
	for (int i = 0; i < N; i++) {
		cin >> board[i];
		fill(F_dist[i], F_dist[i] + M, -1);
		fill(JH_dist[i], JH_dist[i] + M, -1);
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (board[i][j] == 'F') {
				F_Que.push({ i,j });
				F_dist[i][j] = 0;
			}
			if (board[i][j] == 'J') {
				JH_Que.push({ i,j });
				JH_dist[i][j] = 0;
			}
		}
	}

	//Fire bfs
	while (!F_Que.empty()) {
		auto cur = F_Que.front(); F_Que.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
			if (F_dist[nx][ny] >= 0 || board[nx][ny] == '#') continue;
			F_dist[nx][ny] = F_dist[cur.X][cur.Y] + 1;
			F_Que.push({ nx, ny });
		}
	}

	//JIhoon bfs
	while (!JH_Que.empty()) {
		auto cur = JH_Que.front(); JH_Que.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			if (nx < 0 || nx >= N || ny < 0 || ny >= M) {
				cout << JH_dist[cur.X][cur.Y] + 1;
				return 0;
			}
			if (JH_dist[nx][ny] >= 0 || board[nx][ny] == '#') continue;
			if (F_dist[nx][ny] != -1 && F_dist[nx][ny] <= JH_dist[cur.X][cur.Y] + 1) continue;
			JH_dist[nx][ny] = JH_dist[cur.X][cur.Y] + 1;
			JH_Que.push({ nx, ny });
		}
	}
	cout << "IMPOSSIBLE";
}