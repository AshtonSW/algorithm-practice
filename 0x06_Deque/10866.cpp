// Authored by : AshtonSW
// https://www.acmicpc.net/problem/10866

#include <bits/stdc++.h>
using namespace std;

int N, k;
deque <int> DQ;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> N;

	while (N--) {
		string str;
		cin >> str;
		if (str == "push_front") {
			cin >> k;
			DQ.push_front(k);
		}
		else if (str == "push_back") {
			cin >> k;
			DQ.push_back(k);
		}
		else if (str == "pop_front") {
			if (DQ.empty()) cout << "-1" << '\n';
			else {
				cout << DQ.front() << '\n';
				DQ.pop_front();
			}
		}
		else if (str == "pop_back") {
			if (DQ.empty()) cout << "-1" << '\n';
			else {
				cout << DQ.back() << '\n';
				DQ.pop_back();
			}
		}
		else if (str == "size") {
			cout << DQ.size() << '\n';
		}
		else if (str == "empty") {
			if (!DQ.empty()) cout << '0' << '\n';
			else cout << '1' << '\n';
		}
		else if (str == "front") {
			if (DQ.empty()) cout << "-1" << '\n';
			else cout << DQ.front() << '\n';
		}
		else {
			if (DQ.empty()) cout << "-1" << '\n';
			else cout << DQ.back() << '\n';
		}
	}
}