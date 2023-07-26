#include <bits/stdc++.h>
using namespace std;

int n;
int dp[10005];
int mod = 10007;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	dp[1] = 1;
	dp[2] = 2;
	for (int i = 3; i <= n; i++) dp[i] = (dp[i - 1] + dp[i - 2]) % mod;
	cout << dp[n];
}
