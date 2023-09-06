#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define X first
#define Y second

int dx[4] = {1, 0, 0, -1};
int dy[4] = {0, 1, -1, 0};
int n;
string board[26];
int vis[26][26];
vector <int> ans;
int apart_num;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> board[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j] == '0' || vis[i][j] == 1) continue;
            queue <pair<int, int>> Q;
            int area = 1;
            Q.push({ i,j });
            vis[i][j] = 1;
            apart_num++;
            while (!Q.empty()) {
                auto cur = Q.front();
                Q.pop();
                for (int dir = 0; dir < 4; dir++) {
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if (nx < 0 || ny < 0 || nx >= n || ny >= n) continue;
                    if (vis[nx][ny] == 1 || board[nx][ny] == '0')continue;
                    Q.push({ nx, ny });
                    vis[nx][ny] = 1;
                    area++;
                }
            }
            ans.push_back(area);
        }
    }
    cout << apart_num << '\n';
    sort(ans.begin(), ans.end());
    for (auto c : ans) {
        cout << c << '\n';
    }
}
