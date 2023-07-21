// Authored by : AshtonSW
// https://www.acmicpc.net/problem/2753

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	if (N % 400 == 0) {
		cout << '1';
		return 0;
	}
	else if (N % 4 == 0 && N % 100 != 0) cout << '1';
	else cout << '0';
}