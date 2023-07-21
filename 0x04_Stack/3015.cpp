// Authored by : AshtonSW
// https://www.acmicpc.net/problem/3015

#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	stack <pair<int, int>> S;

	int h;
	int N;
	ll ans = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> h;
		int cnt = 1;
		while (!S.empty() && S.top().X <= h) {
			ans += S.top().Y;
			if (S.top().X == h) {
				cnt += S.top().Y;
			}
			S.pop();
		}
		if (!S.empty()) ans += 1;
		S.push({ h, cnt });
	}
	cout << ans;
}