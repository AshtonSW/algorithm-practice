#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define X first
#define Y second
#define INF 1e9
#define pb push_back

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int coins[10002];
int n, k;
ll dp[10002];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        cin >> coins[i];
    }
    dp[0] = 1;
    for (int i = 0; i < n; i++) {
        int coin = coins[i];
        for (int j = coin; j <= k; j++) {
            dp[j] += dp[j - coin];
        }
    }


    cout << dp[k];
    return 0;
}
