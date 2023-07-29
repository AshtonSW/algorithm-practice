#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	for (int i = 1; i <= n - 1; i++) {
		for (int j = 0; j < i; j++) {
			cout << "*";
		}
		for (int j = 2 * i; j < 2 * n; j++) {
			cout << " ";
		}
		for (int j = 0; j < i; j++) {
			cout << "*";
		}
		cout << "\n";
	}
	for (int i = 0; i < 2 * n; i++) cout << "*";
	cout << '\n';
	for (int i = 1; i <= n - 1; i++) {
		for (int j = 0; j < n - i; j++) {
			cout << "*";
		}
		for (int j = 2 * i; j > 0; j--) {
			cout << " ";
		}
		for (int j = 0; j < n - i; j++) {
			cout << "*";
		}
		cout << "\n";
	}

}