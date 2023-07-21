// Authored by : AshtonSW
// https://www.acmicpc.net/problem/10845

#include <bits/stdc++.h>
using namespace std;

int N, k;
queue <int> Q;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;

	while (N--) {
		string str;
		cin >> str;
		if (str == "push") {
			cin >> k;
			Q.push(k);
		}
		else if (str == "pop") {
			if (Q.empty()) cout << "-1" << '\n';
			else {
				cout << Q.front() << '\n';
				Q.pop();
			}
		}
		else if (str == "size") {
			cout << Q.size() << '\n';
		}
		else if (str == "empty") {
			if (!Q.empty()) cout << '0' << '\n';
			else cout << '1' << '\n';
		}
		else if (str == "front") {
			if (Q.empty()) cout << "-1" << '\n';
			else cout << Q.front() << '\n';
		}
		else {
			if (Q.empty()) cout << "-1" << '\n';
			else cout << Q.back() << '\n';
		}
	}
}