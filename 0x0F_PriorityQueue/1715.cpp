#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define X first
#define Y second

int n;
int ans;
int a, b;
priority_queue <int, vector<int>, greater<int>> pq;
vector<int> v;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    while (n--) {
        int a;
        cin >> a;
        pq.push(a);
    }

    while (pq.size() > 1) {
        a = pq.top(); pq.pop();
        b = pq.top(); pq.pop();
        pq.push(a + b);
        v.push_back(a + b);
    }

    for (auto k : v) {
        ans += k;
    }
    cout << ans;
}
