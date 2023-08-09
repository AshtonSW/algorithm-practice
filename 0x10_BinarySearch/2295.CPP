#include <bits/stdc++.h>
using namespace std;

int n;
int u[1005];
vector<int> twosum;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> u[i];
	}
	sort(u, u + n);
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			twosum.push_back(u[i] + u[j]);
		}
	}
	sort(twosum.begin(), twosum.end());
	for (int i = n - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (binary_search(twosum.begin(), twosum.end(), u[i] - u[j])) {
				cout << u[i];
				return 0;
			}
		}
	}
}
