#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

string input[1005];
bool vis[1005][1005];
int dx[4] = {1, 0, 0, -1};
int dy[4] = {0, 1, -1, 0};
int N, M;
int board[1005][1005];
queue <pair <int, int>> Q;
int ans;
bool chance = true;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> input[i];
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			board[i][j] = input[i][j] - '0';
		}
	}
	Q.push({ 0, 0 });
	vis[0][0] == 1;
	while (!Q.empty()) {
		ans++;
		auto cur = Q.front(); Q.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			if (nx < 0 || ny < 0 || nx >= N || ny >= M) continue;
			if (vis[nx][ny] == 1 || board[nx][ny] == 1) continue;
			Q.push({ nx, ny });
			vis[nx][ny] = 1;
		}
	}


	
}