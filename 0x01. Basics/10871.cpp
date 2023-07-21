// Authored by : AshtonSW
// https://www.acmicpc.net/problem/10871

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, X;
	int arr[10002] = {};
	cin >> N >> X;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		if (arr[i] < X) cout << arr[i] << ' ';
	}
}