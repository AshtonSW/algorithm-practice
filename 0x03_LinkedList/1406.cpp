// Authored by : AshtonSW
// https://www.acmicpc.net/problem/1406

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string str;
	int N;
	cin >> str;
	list <char> L;
	cin >> N;
	for (char C : str) {
		L.push_back(C);
	}
	auto cursor = L.end();
	for (int i = 0; i < N; i++) {
		char alp;
		cin >> alp;
		if (alp == 'P') {
			char m;
			cin >> m;
			L.insert(cursor, m);
		}
		else if (alp == 'D') {
			if (cursor != L.end()) cursor++;
		}
		else if (alp == 'B') {
			if (cursor != L.begin()) {
				cursor--;
				cursor = L.erase(cursor);
			}
		}
		else {
			if (cursor != L.begin()) cursor--;
		}
	}
	for (auto C : L) cout << C;
}