// Authored by : AshtonSW
// https://www.acmicpc.net/problem/2444

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	for (int i = 1; i <= 2 * N - 1; i++) {
		if (i <= N) {
			for (int k = N - i; k > 0; k--) {
				cout << ' ';
			}
			for (int j = 0; j < 2 * i - 1; j++) {
				cout << '*';
			}
		}
		else {
			for (int k = 0; k < i - N; k++) {
				cout << ' ';
			}
			for (int j = 0; j < 2 * (2 * N - i) - 1; j++) {
				cout << '*';
			}
		}
		cout << '\n';
	}
}