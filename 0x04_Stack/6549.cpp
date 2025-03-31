#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define X first
#define Y second
#define INF 1e9
#define pb push_back

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    while(true) {
        int n;
        cin >> n;
        if (n == 0) break;
        stack<pair<int, int>> S;
        ll ans = 0;
        for(int i = 0; i < n; i ++) {
            int h;
            cin >> h;
            int idx = i;
            while(!S.empty() && S.top().X >= h) {
                ans = max(ans, 1LL * (i - S.top().Y) * S.top().X);
                idx = S.top().Y;
                S.pop();
            }
            S.push({h, idx});
        }
        while(!S.empty()) {
            ans = max(ans, 1LL * (n - S.top().Y) * S.top().X);
            S.pop();
        }
        cout << ans << '\n';
    }
}
