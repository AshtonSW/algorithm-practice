#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define X first
#define Y second

int n, m;
ll arr[10005];
int st, en, ans;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    
    arr[0] = 0;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        arr[i] += arr[i - 1];
    }

    while (en <= n) {
        ll sum = arr[en] - arr[st];
        if (sum <= m) {
            if (sum == m) ans++;
            en++;
        }
        else st++;
    }
    
    cout << ans;

}
