// Authored by : AshtonSW
// https://www.acmicpc.net/problem/2576

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int arr[7] = {};
	int ans[7] = {};
	int sum = 0;
	int cnt = 0;
	int mini = 1000;
	for (int i = 0; i < 7; i++) {
		cin >> arr[i];

		if (arr[i] % 2 == 1) {
			sum += arr[i];
			ans[i] = arr[i];
			cnt++;
			mini = min(ans[i], mini);
		}
	}
	if (cnt == 0) {
		cout << "-1";
	}
	else cout << sum << '\n' << mini;
}