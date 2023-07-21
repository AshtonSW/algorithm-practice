// Authored by : AshtonSW
// https://www.acmicpc.net/problem/5397

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;

	cin >> N;

	while (N--) {
		list <char> L = {};
		string str;
		cin >> str;
		auto cursor = L.begin();

		for (auto c : str) {

			if (c == '<') {
				if (cursor != L.begin()) {
					cursor--;
				}
			}
			else if (c == '>') {
				if (cursor != L.end()) {
					cursor++;

				}
			}
			else if (c == '-') {
				if (cursor != L.begin()) {
					cursor--;
					cursor = L.erase(cursor);
				}
			}
			else
			{
				L.insert(cursor, c);
			}
		}

		for (auto C : L) cout << C;
		cout << '\n';
	}
}