#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;
using ll = long long;
#define X first
#define Y second

vector<int> adj2[10];
bool vis[10];
    
void bfs() {
    queue<int> q;
    q.push(1);
    vis[1] = true;
    while(!q.empty()) {
        int cur = q.front();
        q.pop();
        cout << cur << ' ';
        for(auto nxt : adj2[cur]) {
            if(vis[nxt]) continue;
            q.push(nxt);
            vis[nxt] = true;
        }
    }
}


vector <int> adj3[10];
int dist[10];
void bfs2() {
    fill(dist, dist+10, -1);
    queue<int> q;
    q.push(1);
    dist[1] = 0;
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        for(auto nxt : adj3[cur]){
            if(dist[nxt] != -1) continue;
            q.push(nxt);
            dist[nxt] = dist[cur] + 1;
        }
    }
}

vector<int> adj4[10];
bool vis2[10];
void dfs(){
    stack<int> s;
    s.push(1);
    vis2[1] = true;
    while(!s.empty()) {
        int cur = s.top();
        s.pop();
        for(auto nxt : adj4[cur]){
            if(vis[nxt]) continue;
            s.push(nxt);
            vis[nxt] = true;
        }
    }
}

vector<int> adj5[10];
bool vis[10];
void dfs2(int cur) {
    vis[cur] = true;
    cout << cur << " ";
    for(auto nxt : adj5[cur]){
        if(vis[nxt]) continue;
        dfs2(nxt);
    }
}


// 비재귀를 재귀 dfs 처럼 돌게 만들기
vector<int> adj6[10];
bool vis3[10];
void dfs(){
    stack<int> s;
    s.push(1);
    while(!s.empty()) {
        int cur = s.top();
        s.pop();
        if(vis[cur]) continue;
        for(auto nxt : adj6[cur]){
            if(vis[nxt]) continue;
            s.push(nxt);
            vis[nxt] = true;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // 인접 행렬로 나타내고자함.
    // 공간은 O(V^2)이 필요함.
    int adj_matrix[10][10];
    int V, E;
    cin >> V >> E;
    for(int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        adj_matrix[u][v] = 1;
        // 무방향 그래프일경우
        adj_matrix[v][u] = 1;
    }

    // 인접리스트를 활용한 방법이 있음.
    // 이 방식은 인접 행렬과 비교했을 때 
    // 정점이 많고, 간선은 상대적으로 작은 상황에서 
    // 공간 절약가능.
    // O(V+E)의 공간이 필요함. 무방향일 때는 2E 임.
    vector<int> adj[10];
    int v, e;
    for(int i = 0; i < e; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        // 무방향일 경우에는
        adj[v].push_back(u);
    }

    /*
    결국 공간 복잡도는 
    - 인접행렬은 O(V^2)
    - 인접리스트는 O(V+E)
    정점 u, v가 연결되어 있는지 확인하는 시간 복잡도
    - 인접행렬은 O(1)
    - 인접 리스트는 O(min(deg(u), deg(v)))
    정점 v와 연결된 모든 정점을 확인하는 시간복잡도
    - 인접행렬은 O(v)
    - 인접 리스트는 O(deg(v))
    효율적인 상황은
    - 인접행렬은 두 점의 연결여부를 자주 확인한다면, E가 V^2에 가까울 때
    - 인접 리스트는 특정 정점에 연결된 모든 정점을 자주 확인할 때
    E가 V^2보다 훨씬 작을때

    이동거리가 같은 건 BFS가 사용이 가능했음. 따라서 간선길이가 1인
    그래프도 가능함! 만약 길이가 다르면, 플로이드나 다익스트라 써야함.
     */

    
}
