// Authored by : AshtonSW
// https://www.acmicpc.net/problem/10828

#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	string str;
	cin >> N;
	int X;
	stack <int> S;
	for (int i = 0; i < N; i++) {
		cin >> str;
		if (str == "push") {
			cin >> X;
			S.push(X);
		}
		else if (str == "pop") {
			if (S.empty()) cout << "-1" << '\n';
			else {
				cout << S.top() << '\n';
				S.pop();
			}
		}
		else if (str == "top") {
			if (S.empty()) cout << "-1" << '\n';
			else cout << S.top() << '\n';
		}
		else if (str == "empty") {
			if (S.empty()) cout << "1" << '\n';
			else cout << "0" << '\n';
		}
		else
		{
			cout << S.size() << '\n';
		}
	}
}