#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int dp[1005][3] = {};
	int N;
	int Rcost[1005], Gcost[1005], Bcost[1005];
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> Rcost[i] >> Gcost[i] >> Bcost[i];
	}
	dp[1][0] = Rcost[1];
	dp[1][1] = Gcost[1];
	dp[1][2] = Bcost[1];
	for (int i = 2; i <= N; i ++) {
		dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + Rcost[i];
		dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + Gcost[i];
		dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + Bcost[i];
	}
	cout << min({ dp[N][0], dp[N][1], dp[N][2] });
}