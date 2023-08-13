#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define X first
#define Y second

int n;
int dp[1005];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    dp[1] = 1;
    dp[2] = 3;
    int mod = 10007;
    for (int i = 3; i <= n; i++) dp[i] = (dp[i - 1] + dp[i - 2] * 2) % mod;
    cout << dp[n];
    return 0;
}
