// Authored by : AshtonSW
// https://www.acmicpc.net/problem/2562

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int arr[9] = {};
	int mx = 0;
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		mx = max(mx, arr[i]);
	}
	cout << mx << '\n';
	for (int i = 0; i < 9; i++) {
		if (mx == arr[i]) cout << i + 1;
	}
}