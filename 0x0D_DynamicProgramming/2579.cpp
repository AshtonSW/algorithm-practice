#include <bits/stdc++.h>
using namespace std;

int N;
int score[305];
int dp[305][2]; // 2는 계단을 몇개 밟고 올라왔는지에 대한 정보

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> N;
	for (int i = 1; i <= N; i++) cin >> score[i];
	if (N == 1) {
		cout << score[1];
		return 0;
	}
	dp[1][1] = score[1];
	dp[1][2] = 0;
	dp[2][1] = score[2]; // 한 번에 올라온 경우(1계단 만에)
	dp[2][2] = score[1] + score[2]; // 2개의 계단을 밟고 올라온 경우
	for (int i = 3; i <= N; i++) {
		dp[i][1] = max(dp[i - 2][1], dp[i - 2][2]) + score[i];
		dp[i][2] = dp[i - 1][1] + score[i];
	}
	cout << max(dp[N][1], dp[N][2]);
}