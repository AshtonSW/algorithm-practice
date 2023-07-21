// Authored by : AshtonSW
// https://www.acmicpc.net/problem/2480

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int x, y, z, ans;

	cin >> x >> y >> z;
	if (x == y && y == z) {
		ans = 10000 + x * 1000;
		cout << ans;
	}
	else if ((x == y && x != z) || (x == z && x != y)) {
		ans = 1000 + x * 100;
		cout << ans;
	}
	else if (y == z && y != x) {
		ans = 1000 + y * 100;
		cout << ans;
	}
	else {
		int mx;
		mx = max(x, y);
		mx = max(mx, z);
		ans = 100 * mx;
		cout << ans;
	}
}