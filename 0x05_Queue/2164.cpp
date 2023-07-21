// Authored by : AshtonSW
// https://www.acmicpc.net/problem/2164

#include <bits/stdc++.h>
using namespace std;

int N;
queue <int> Q;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;
	for (int i = 1; i <= N; i++) Q.push(i);
	while (Q.size() != 1) {
		Q.pop();
		Q.push(Q.front());
		Q.pop();
	}
	if (Q.size() == 1) {
		cout << Q.front();
	}
}