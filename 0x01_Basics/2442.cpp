// Authored by : AshtonSW
// https://www.acmicpc.net/problem/2442

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		for (int k = i; k < N; k++) {
			cout << ' ';
		}
		for (int j = 0; j < 2 * i - 1; j++) {
			cout << '*';
		}

		cout << '\n';
	}
}