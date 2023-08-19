#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define X first
#define Y second

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    int a[100005];
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        ans = max(ans, a[n-i] * i);
    }
    cout << ans;
}
