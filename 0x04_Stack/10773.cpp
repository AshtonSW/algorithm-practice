// Authored by : AshtonSW
// https://www.acmicpc.net/problem/10773

#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, K;
	cin >> N;
	int ans = 0;
	stack <int> S;
	for (int i = 0; i < N; i++) {
		cin >> K;
		if (!S.empty() && K == 0) {
			ans -= S.top();
			S.pop();
		}
		else {
			S.push(K);
			ans += S.top();
		}
	}
	cout << ans;
}