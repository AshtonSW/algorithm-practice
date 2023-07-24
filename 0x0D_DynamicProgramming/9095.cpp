// Authored by: AshtonSW
// https://www.acmicpc.net/problem/9095

#include <bits/stdc++.h>
using namespace std;

int N, tc;
int dp[12];

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> tc;
	for (int i = 1; i <= tc; i++) {
		dp[1] = 1;
		dp[2] = 2;
		dp[3] = 4;
		cin >> N;
		for (int i = 4; i <= N; i++) {
			dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
		}
		cout << dp[N] << '\n';
	}
}