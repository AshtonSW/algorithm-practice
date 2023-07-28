#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	priority_queue <int, vector<int>, greater<int>> pq;
	int x, tc;
	cin >> tc;
	for (int i = 1; i <= tc; i++) {
		cin >> x;
		if (x > 0) pq.push(x);
		else {
			if (pq.empty()) {
				cout << "0" << '\n';
			}
			else {
				cout << pq.top() << '\n';
				pq.pop();
			}
		}
	}
}