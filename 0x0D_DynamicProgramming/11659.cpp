#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define X first
#define Y second

int n, m;
ll sumdp[100005];
ll arr[100005];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> arr[i];

    sumdp[0] = arr[0];
    for (int i = 1; i < n; i++) {
        sumdp[i] = arr[i] + sumdp[i - 1];
    }
    while (m--) {
        int a, b;
        cin >> a >> b;
        if (a == 1) cout << sumdp[b - 1] << '\n';
        else {
            cout << sumdp[b - 1] - sumdp[a - 2] << '\n';
        }
    }
}
