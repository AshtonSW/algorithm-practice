#include <bits/stdc++.h>
using namespace std;

int h;
int num[505][505];
int dp[505][505];

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> h;
	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= i; j++) {
			cin >> num[i][j];
		}
	}
	dp[1][1] = num[1][1];
	for(int i = 2; i <= h;i++){
		for (int j = 1; j <= i; j++) {
			dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + num[i][j];
		}
	}
		
	 cout << *max_element(dp[h] + 1, dp[h] + h + 1);
}