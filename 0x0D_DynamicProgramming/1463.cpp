// Authored by: AshtonSW
// https://www.acmicpc.net/problem/1463

#include <bits/stdc++.h>
using namespace std;

int N;
int d[1000008];

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> N;
	d[1] = 0;
	for (int i = 2; i <= N; i++) {
		d[i] = d[i - 1] + 1;
		if (i % 2 == 0) d[i] = min(d[i], d[i / 2] + 1);
		if (i % 3 == 0) d[i] = min(d[i], d[i / 3] + 1);
	}
	cout << d[N];
}