// Authored by : AshtonSW
// https://www.acmicpc.net/problem/11003

#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
deque <pair<int, int>> DQ;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, L;
	cin >> N >> L;

	for (int i = 0; i < N; i++) {
		int k;
		cin >> k;
		while (!DQ.empty() && (DQ.back().Y >= k)) {
			DQ.pop_back();
		}
		DQ.push_back({ i, k });

		if (DQ.front().X <= i - L) DQ.pop_front();

		cout << DQ.front().Y << ' ';
	}

}