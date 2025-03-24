#include <iostream>
#include <algorithm>
#include <queue>
#include <stack>
#include <vector>
using namespace std;
using ll = long long;
#define X first
#define Y second
#define pb push_back

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int board[8][8];
int copyboard[8][8];
int vis[8][8];
int alreadyChanged[8][8];
int n, m;
int result;

void bfs() {
    queue<pair<int, int>> Q;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            copyboard[i][j] = board[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(copyboard[i][j] == 2) Q.push({i, j});
        }
    }

    while(!Q.empty()) {
        auto cur = Q.front(); Q.pop();
        for(int dir = 0; dir < 4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (copyboard[nx][ny] == 1 || copyboard[nx][ny] == 2) continue;
            copyboard[nx][ny] = 2;
            Q.push({nx, ny});
        }
    }

    int safe = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(copyboard[i][j] == 0) safe++;
        }
    }
    
    result = max(result, safe);
}

void buildWall(int cnt){
    if(cnt == 3){
        bfs();
        return;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(board[i][j] == 0) {
                board[i][j] = 1;
                buildWall(cnt + 1);
                board[i][j] = 0;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> board[i][j];
        }
    }

    buildWall(0);
    cout << result;
    
    return 0;
}
