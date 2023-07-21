// Authored by : AshtonSW
// https://www.acmicpc.net/problem/1926

#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int n, m;
int area, cnt;
int mxarea;
int board[502][502];
int dx[4] = { 0, 1, -1 ,0 };
int dy[4] = { 1, 0, 0, -1 };
bool visited[502][502];


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	queue <pair<int, int>> Q;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> board[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (visited[i][j] || board[i][j] == 0) continue;
			cnt++;
			visited[i][j] = 1;
			Q.push({ i,j });
			area = 0;
			while (!Q.empty()) {
				pair<int, int> cur = Q.front(); Q.pop();
				for (int dir = 0; dir < 4; dir++) {
					int nx = cur.X + dx[dir];
					int ny = cur.Y + dy[dir];
					if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
					if (visited[nx][ny] || board[nx][ny] != 1) continue;
					visited[nx][ny] = 1;
					Q.push({ nx,ny });
				}
				area++;
			}
			mxarea = max(mxarea, area);
		}
	}
	cout << cnt << '\n' << mxarea;
}