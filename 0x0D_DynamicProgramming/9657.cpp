#include <bits/stdc++.h>
using namespace std;

int n;
int d[1005];
int chk[3] = { 1, 3, 4 };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	d[1] = 1; // sk
	d[2] = 2; // cy
	d[3] = 1; // sk
	d[4] = 1; // SK
	
	for (int i = 5; i <= n; i++) {
		for (auto j : chk) {
			if (d[i - j] == 2) {
				d[i] = 1;
				break;
			}
			else d[i] = 2;
		}
	}
	if (d[n] % 2 == 1) cout << "SK";
	else cout << "CY";
}