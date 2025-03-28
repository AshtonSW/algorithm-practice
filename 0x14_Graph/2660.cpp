#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define X first
#define Y second
#define pb push_back
#define INF 1e9

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int n;
int u, v;
vector<int> adj[52];
int dist[52];

int result[52];
vector<int> ceoList;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    fill(result, result + 52, -1);
    while(true) {
        cin >> u >> v;
        if(u == -1 && v == -1) break;
        adj[u].pb(v);
        adj[v].pb(u);
    }
   
    for(int i = 1; i <= n; i++){
        queue<int> q;
        int cnt = 0;
        dist[0] = INF;

        int maxDist = 0;
        fill(dist + 1, dist + 52, -1);
        q.push(i);
        dist[i] = 0;
        while(!q.empty()){
            int cur = q.front(); q.pop();
            for(auto nxt : adj[cur]) {
                if(dist[nxt] != -1) continue;
                dist[nxt] = dist[cur] + 1;
                q.push(nxt);
            }
        }

        for(int j = 1; j <= n; j++) {
            if(dist[j] == -1) continue; // 연결 안 된 경우
            maxDist = max(maxDist, dist[j]);
        }

        result[i] = maxDist;
    }

    // 최솟값 찾기
    int minVal = INF;
    for(int i = 1; i <= n; i++){
        if(result[i] != -1 && result[i] < minVal) minVal = result[i];
    }

    int countNum = 0;
    for(int i = 1; i <= n; i++) {
        if(result[i] != -1 && result[i] == minVal) {
            countNum++;
            ceoList.pb(i);
        }
    }
    
    
    cout << minVal << ' ' << countNum << '\n'; 
    for(auto c: ceoList){
        cout << c << ' ';
    }
}
