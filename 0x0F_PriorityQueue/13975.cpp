#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define X first
#define Y second

int tc, n;
ll a, b;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> tc;
    while (tc--) {
        cin >> n;
        ll ans = 0;
        priority_queue <ll, vector<ll>, greater<ll>> pq;
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            pq.push(num);
        }
        while (pq.size() > 1) {
            a = pq.top(); pq.pop();
            b = pq.top(); pq.pop();
            pq.push(a + b);
            ans += a + b;
        }
        cout << ans << '\n';
    }
}
