#include <bits/stdc++.h>
using namespace std;

int n;
long long dp[92];

int main(void) {
	cin >> n;
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 1;
	for (int i = 3; i <= n; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	cout << dp[n];
}