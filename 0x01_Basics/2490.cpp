// Authored by : AshtonSW
// https://www.acmicpc.net/problem/2490

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	int cnt = 0;
	for (int i = 0; i < 3; i++) {
		for (int i = 0; i < 4; i++) {
			cin >> N;
			if (N == 0) cnt++;
		}
		if (cnt == 4) cout << 'D' << '\n';
		else if (cnt == 1) cout << 'A' << '\n';
		else if (cnt == 2) cout << 'B' << '\n';
		else if (cnt == 3) cout << 'C' << '\n';
		else cout << 'E' << '\n';
		cnt = 0;
	}
}