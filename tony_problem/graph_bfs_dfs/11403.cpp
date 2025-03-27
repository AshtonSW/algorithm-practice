#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define X first
#define Y second
#define pb push_back

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int n;
int adj[102][102];


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> adj[i][j];
        }
    }

    queue<pair<int, int>> q;
    

    for(int i = 0; i < n; i++){
        bool vis[102] = {};
        queue<int> q;
        q.push(i);
        while(!q.empty()){
            int cur = q.front(); q.pop();
            for(int nxt = 0; nxt < n; nxt++){
                if(vis[nxt] || adj[cur][nxt] != 1) continue;
                q.push(nxt);
                vis[nxt] = true;
            }
        }

        for(int i = 0; i < n; i++){
            if(vis[i] == true) cout << "1 ";
            else cout << "0 ";
        }
        cout << '\n';
    }
}
