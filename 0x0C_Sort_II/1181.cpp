// Authored by : AshtonSW
// https://www.acmicpc.net/problem/1181

#include <bits/stdc++.h>
using namespace std;

bool Comp(string a, string b) {
	if (a.length() == b.length()) {
		return a < b;
	}
	return a.length() < b.length();
}

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector <string> V;
	string S;
	int t;
	cin >> t;
	while (t--) {
		cin >> S;

		if (find(V.begin(), V.end(), S) == V.end()) {
			V.push_back(S);
		}
	}
	sort(V.begin(), V.end(), Comp);
	for (auto c : V) {
		cout << c << '\n';
	}
}
