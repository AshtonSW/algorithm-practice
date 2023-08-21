#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define X first
#define Y second
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int m, n, k;
int board[102][102];
int vis[102][102];
int cnt;
vector<int> ans;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> m >> n >> k;
    while (k--) {
        int x1, y1;
        int x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int i = y1; i < y2; i++) {
            for (int j = x1; j < x2; j++) {
                board[i][j] = 1;
            }
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j] == 1 || vis[i][j] == 1) continue;
            queue <pair<int, int>> Q;
            vis[i][j] = 1;
            Q.push({ i, j });
            cnt++;
            int width = 1;
            while (!Q.empty()) {
                auto cur = Q.front(); Q.pop();
                for (int dir = 0; dir < 4; dir++) {
                    int nx = cur.X + "0121"[dir] - 49;
                    int ny = cur.Y + "1012"[dir] - 49;
                    if (nx < 0 || ny >= n || ny < 0 || nx >= m) continue;
                    if (board[nx][ny] == 1 || vis[nx][ny] == 1) continue;
                    Q.push({ nx,ny });
                    vis[nx][ny] = 1;
                    width++;
                }
            }
            ans.push_back(width);
            
        }

    }
        
    sort(ans.begin(), ans.end());
    cout << cnt << '\n';
    for (auto c : ans) {
        cout << c << ' ';
    }
    return 0;
}
