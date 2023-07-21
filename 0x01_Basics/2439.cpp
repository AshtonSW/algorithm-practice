// Authored by : AshtonSW
// https://www.acmicpc.net/problem/2439

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		for (int j = N; j > i; j--) {
			cout << ' ';
		}
		for (int k = 0; k < i; k++) cout << '*';
		cout << '\n';
	}
}