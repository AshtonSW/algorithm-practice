// Authored by : AshtonSW
// https://www.acmicpc.net/problem/2577

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b, c, k;
	int arr[10] = {};
	cin >> a >> b >> c;
	long long mulp = a * b * c;

	for (int i = 0; i < 10; i++) {
		if (mulp == 0) break;
		k = mulp % 10;
		mulp = mulp / 10;
		arr[k]++;

	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << '\n';
	}
}
