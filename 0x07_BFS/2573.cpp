#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define X first
#define Y second
#define INF 1e9
#define pb push_back

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int n, m;
int board[302][302];

queue <pair<int, int>> Q;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> board[i][j];
            
        }
    }

    
    int minTime = 0;

    while(true) {
        int cnt = 0;
        bool vis[302][302] = {};
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(board[i][j] != 0 && !vis[i][j]) {
                    Q.push({i, j});
                    vis[i][j] = true;
                    while(!Q.empty()) {
                        auto cur = Q.front(); Q.pop();
                        int sea = 0;
                        for(int dir = 0; dir < 4; dir++){
                            int nx = cur.X + dx[dir];
                            int ny = cur.Y + dy[dir];
                            if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
                            if(board[nx][ny] == 0) sea++;
                            if(!vis[nx][ny] && board[nx][ny] != 0) {
                                vis[nx][ny] = true;
                                Q.push({nx, ny});
                            }
                        }
                        board[cur.X][cur.Y] -= sea;
                        if(board[cur.X][cur.Y] < 0) board[cur.X][cur.Y] = 0;
                    }
                    cnt++;
                }
            }
        }   
        if(cnt == 0) {
            cout << 0;
            return 0;
        }
        if(cnt >= 2) {
            cout << minTime;
            return 0;
        }

        minTime++;
    }
}
