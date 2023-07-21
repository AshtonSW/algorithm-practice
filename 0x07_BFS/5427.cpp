// Authored by : AshtonSW
// https://www.acmicpc.net/problem/5427

#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int N;
string board[1001];
int distF[1001][1001];
int distP[1001][1001];
int dx[4] = { 1, 0, 0, -1 };
int dy[4] = { 0, 1 ,-1, 0 };
int Testnum, w, h;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> Testnum;
	while (Testnum--) {
		bool escape = false;
		cin >> w >> h;
		queue <pair<int, int>> Q1 = {};
		queue <pair<int, int>> Q2 = {};
		for (int i = 0; i < h; i++) {
			cin >> board[i];
		}
		for (int i = 0; i < h; i++) {
			fill(distF[i], distF[i] + w, -1);
			fill(distP[i], distP[i] + w, -1);
		}

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (board[i][j] == '*') {
					distF[i][j] = 0;
					Q1.push({ i,j });
				}
				if (board[i][j] == '@') {
					distP[i][j] = 0;
					Q2.push({ i,j });
				}
			}
		}

		while (!Q1.empty()) {
			auto cur = Q1.front(); Q1.pop();
			for (int dir = 0; dir < 4; dir++) {
				int nx = cur.X + dx[dir];
				int ny = cur.Y + dy[dir];
				if (nx < 0 || ny < 0 || nx >= h || ny >= w) continue;
				if (distF[nx][ny] != -1 || board[nx][ny] == '#') continue;
				distF[nx][ny] = distF[cur.X][cur.Y] + 1;
				Q1.push({ nx, ny });
			}
		}

		while (!Q2.empty() && (!escape)) {
			auto cur = Q2.front(); Q2.pop();
			for (int dir = 0; dir < 4; dir++) {
				int nx = cur.X + dx[dir];
				int ny = cur.Y + dy[dir];
				if (nx < 0 || ny < 0 || nx >= h || ny >= w) {
					cout << distP[cur.X][cur.Y] + 1 << '\n';
					escape = true;
					break;
				}
				if (distP[nx][ny] >= 0 || board[nx][ny] == '#') continue;
				if (distF[nx][ny] != -1 && distP[cur.X][cur.Y] + 1 >= distF[nx][ny]) continue;
				distP[nx][ny] = distP[cur.X][cur.Y] + 1;
				Q2.push({ nx, ny });
			}

		}
		if (!escape) {
			cout << "IMPOSSIBLE" << '\n';
		}
	}
}

