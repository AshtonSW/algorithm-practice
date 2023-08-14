#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define X first
#define Y second

vector <int> adj[1005];
bool vis[1005];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    while(m--){
        int l, k;
        cin >> l >> k;
        adj[l].push_back(k);
        adj[k].push_back(l);
    }
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(vis[i]) continue;
        cnt++;
        queue <int> Q;
        Q.push(i);
        vis[i] = true;
        while(!Q.empty()){
            int cur = Q.front();
            Q.pop();
            for(auto nxt : adj[cur]){
                if(vis[nxt]) continue;
                Q.push(nxt);
                vis[nxt] = true;
            }
        }
    }
}
