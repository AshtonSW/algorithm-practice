#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int tc;
	cin >> tc;
	int sum1 = 0; // Y
	int sum2 = 0; // M
	for (int i = 1; i <= tc; i++) {
		int a;
		cin >> a;
		if (a < 29) sum1 += 10;
		else sum1 += 10 * (a / 30) + 10;
		if (a < 60) sum2 += 15;
		else sum2 += 15 * (a / 60) + 15;
	}
	if (sum1 == sum2) cout << "Y" << ' ' << "M" << ' ' << sum1;
	else if (sum1 < sum2) cout << "Y" << ' ' << sum1;
	else cout << "M" << ' ' << sum2;
}