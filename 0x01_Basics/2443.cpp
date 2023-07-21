// Authored by : AshtonSW
// https://www.acmicpc.net/problem/2443

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int k = 1; k < i + 1; k++) {
			cout << ' ';
		}
		for (int j = 2 * N - (2 * i) - 1; j > 0; j--) {
			cout << '*';
		}
		cout << '\n';
	}
}