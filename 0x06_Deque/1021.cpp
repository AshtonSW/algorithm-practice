// Authored by : AshtonSW
// https://www.acmicpc.net/problem/1021

#include <bits/stdc++.h>
using namespace std;

deque <int> DQ;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, K;
	int ans = 0;
	cin >> N >> K;
	for (int i = 1; i <= N; i++) DQ.push_back(i);
	while (K--) {
		int t;
		cin >> t;

		int idx = find(DQ.begin(), DQ.end(), t) - DQ.begin();
		while (DQ.front() != t) {
			if (idx < DQ.size() - idx) {
				DQ.push_back(DQ.front());
				DQ.pop_front();
			}
			else {
				DQ.push_front(DQ.back());
				DQ.pop_back();
			}
			ans++;
		}
		DQ.pop_front();
	}
	cout << ans;
}