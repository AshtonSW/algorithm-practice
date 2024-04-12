#include <iostream>
#include <queue>
using namespace std;
#define X first
#define Y second

int n;
int dx[4] = { 1,0,0,-1 };
int dy[4] = { 0,1,-1,0 };
int k, s;
int mx, ans;
int board[102][102];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
		{
			cin >> board[i][j];
			mx = max(mx, board[i][j]);
		}
	}

	for (int f = 0; f < mx; f++) {
		int visBoard[102][102] = {};
		int vis[102][102] = {};
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++)
			{
				if (board[i][j] <= f) visBoard[i][j] = 1;
			}
		}

		int cnt=0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++)
			{
				
				if (visBoard[i][j] == 1 || vis[i][j] == 1) continue;
				cnt++;
				queue <pair<int, int>> Q;
				Q.push({ i,j });
				vis[i][j] = 1;
				while (!Q.empty()) {
					auto cur = Q.front(); Q.pop();
					for (int i = 0; i < 4; i++) {
						int nx = cur.X + dx[i];
						int ny = cur.Y + dy[i];
						if (nx < 0 || nx >= n || ny >= n || ny < 0) continue;
						if (visBoard[nx][ny] == 1 || vis[nx][ny] == 1) continue;
						vis[nx][ny] = 1;
						Q.push({ nx, ny });

					}
				}
			}
		}
		ans = max(cnt, ans);
	}
	cout << ans;
}