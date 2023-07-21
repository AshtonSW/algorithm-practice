// Authored by : AshtonSW
// https://www.acmicpc.net/problem/1874

#include <bits/stdc++.h>
using namespace std;
int arr[100001];

int main() {
	int n, k;
	cin >> n;
	stack <int> S;
	int cnt = 1;
	string str;
	while (n--) {
		cin >> k;
		while (cnt <= k) {
			S.push(cnt++);
			str += "+\n";
		}
		if (S.top() < k) {
			cout << "NO";
			return 0;
		}
		S.pop();
		str += "-\n";
	}
	cout << str;
}